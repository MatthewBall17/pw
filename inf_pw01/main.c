#include <stdio.h>

#define MEMORY_SIZE 256

// состояниe процессора
#define PC 0 // счетчик команд
#define ACC 1 // аккумулятор
#define IR 2 // регистр команд (текущий опкод)
#define IV 3 // вектор прерываний (адрес обработчика ошибок)
#define HALT 4 // флаг остановки
#define ERR 5 // код последней ошибки

#define START_PC 6

int cpu_state[8], memory[MEMORY_SIZE];
int interrupt_count = 0;

// перенаправление program.txt в stdin
void load_program(void) {
    int i = 0, value;
    while(i < MEMORY_SIZE && scanf("%d", &value) == 1) memory[i++] = value;

    // проверяем корректность чтения program.txt
    if(i == 0) printf("Нет входных данных\n");
    else printf("Загружено %d чисел\n", i);
}
// переход к вектору прерываний
int interrupt(int pc) {
    int iv = cpu_state[IV];
    if(iv < 0 || iv >= MEMORY_SIZE) {
        printf("ОШИБКА: адрес обработчика ошибок вне памяти\n");
        return 1;
    }
    if(pc == iv) {
        printf("ОШИБКА: повторное прерывание\n");
        return 1;
    }
    cpu_state[PC] = iv; interrupt_count++;
    if(interrupt_count > 1) {
        printf("ОШИБКА: слишком много прерываний\n");
        return 1;
    }
    return 0;
}
int main(void) {
    // вариант 4, уровень "отлично"
    load_program();

    // инициализация начального состояния процессора
    cpu_state[PC] = START_PC;
    cpu_state[ACC] = 0;
    cpu_state[IR] = 0;
    cpu_state[IV] = memory[0];
    cpu_state[HALT] = 0;
    cpu_state[ERR] = 0;
    cpu_state[6] = 0;
    cpu_state[7] = 0;

    printf("Начальное состояние процессора: pc = %d, acc = %d, iv = %d\n", cpu_state[PC], cpu_state[ACC], cpu_state[IV]);

    while(cpu_state[HALT] == 0) {
        int pc = cpu_state[PC];

        if(pc >= MEMORY_SIZE) {
            printf("ОШИБКА: команда вне памяти\n");
            cpu_state[ERR] = 1;
            if(interrupt(pc)) {
                printf("Программа завершена с ошибкой\n");
                cpu_state[HALT] = 1;
            }
            continue;
        }
        
        int opcode = memory[pc];
        cpu_state[IR] = opcode;

        if(opcode < 0 || opcode > 5) {
            printf("pc: %d, ОШИБКА: неизвестная команда %d\n", pc, opcode);
            cpu_state[ERR] = 1;
            if(interrupt(pc)) {
                printf("Программа завершена с ошибкой\n");
                cpu_state[HALT] = 1;
            }
            continue;
        }
        // команда 0 - стоп
        if(opcode == 0) {
            printf("pc = %d: команда 0, acc = %d\n", pc, cpu_state[ACC]);
            printf("Завершение программы\n");
            cpu_state[HALT] = 1;
            continue;
        }
        // команда 1 - вывод значения аккумулятора
        if(opcode == 1) {
            printf("pc = %d: команда 1, acc = %d\n", pc, cpu_state[ACC]);
            cpu_state[PC]++;
            continue;
        }

        // инициализация операнда для следующих команд
        if(pc + 1 >= MEMORY_SIZE) {
            printf("ОШИБКА: адрес операнда вне памяти\n");
            cpu_state[ERR] = 1;
            if(interrupt(pc)) {
                printf("Программа завершена с ошибкой\n");
                cpu_state[HALT] = 1;
            }
            continue;
        }
        int operand = memory[pc + 1];
        // переход на следующую команду после завершения предыдущей
        cpu_state[PC] += 2;
        // флаг наличия ошибки
        int error = 0;

        // остальные команды
        switch(opcode) {
            case 2: // команда 2 - загрузить в аккумулятор значение из ячейки памяти
                if(operand < 0 || operand >= MEMORY_SIZE) error = 1; 
                else cpu_state[ACC] = memory[operand];
                break;
            case 3: // команда 3 - умножить аккумулятор на значение из ячейки памяти
                if(operand < 0 || operand >= MEMORY_SIZE) error = 1; 
                else cpu_state[ACC] *= memory[operand];
                break;
            case 4: // команда 4 — безусловный переход (JUMP)
                if(operand < 0 || operand >= MEMORY_SIZE) error = 1; 
                else cpu_state[PC] = operand;
                break;
            case 5: // команда 5 - условный переход (JUMP IF ZERO)
                if(cpu_state[ACC] == 0) {
                    if(operand < 0 || operand >= MEMORY_SIZE) error = 1; 
                    else cpu_state[PC] = operand;
                }
                break;
        }
        if(error) {
            printf("pc=%d: команда %d, operand=%d, ОШИБКА: операнд вне памяти\n", pc, opcode, operand);
            cpu_state[ERR] = 1;
            if(interrupt(pc)) {
                printf("Программа завершена с ошибкой\n");
                cpu_state[HALT] = 1;
            }
            continue;
        }
        printf("pc = %d: команда %d, operand = %d, acc = %d\n", pc, opcode, operand, cpu_state[ACC]);
    }
    printf("Конечное состояние процессора: pc = %d, acc = %d, код последней ошибки = %d\n", cpu_state[PC], cpu_state[ACC], cpu_state[ERR]);
    return 0;
}
