#include <stdio.h>
#include <stdint.h>

int main(){
    printf("INT8: size=%zu, min=%d, max=%d, values=%d\n", sizeof(int8_t), INT8_MIN, INT8_MAX, 2*-INT8_MIN);
    printf("UINT8: size=%zu, min=0, max=%d, values=%d\n", sizeof(uint8_t), UINT8_MAX, UINT8_MAX+1);
    printf("INT16: size=%zu, min=%d, max=%d, values=%d\n", sizeof(int16_t), INT16_MIN, INT16_MAX, 2*-INT16_MIN);
    printf("UINT16: size=%zu, min=0, max=%d, values=%d\n", sizeof(uint16_t), UINT16_MAX, UINT16_MAX+1);
    printf("INT32: size=%zu, min=%d, max=%d, values=%ld\n", sizeof(int32_t), INT32_MIN, INT32_MAX, 2*(long int)INT32_MIN);
    printf("UINT32: size=%zu, min=0, max=%ld, values=%ld\n", sizeof(uint32_t), UINT32_MAX, (long int)UINT32_MAX + 1);

    return 0;
}