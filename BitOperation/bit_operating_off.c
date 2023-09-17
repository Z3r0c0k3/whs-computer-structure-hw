#include <stdio.h>

int is_bit_set(unsigned char value, int position) {
    return (value & (1 << position)) != 0;
}

unsigned char set_bit(unsigned char value, int position) {
    return value | (1 << position);
}

unsigned char clear_bit(unsigned char value, int position) {
    return value & ~(1 << position);
}

int main() {
    unsigned char value = 0b00001000;

    if (is_bit_set(value, 3)) {
        printf("3rd bit is set!\n");
    } else {
        printf("3rd bit is not set!\n");
    }

    value = clear_bit(value, 3);
    printf("Value after clearing 3rd bit: %d\n", value);
    
    if (is_bit_set(value, 3)) {
        printf("3rd bit is set!\n");
    } else {
        printf("3rd bit is not set!\n");
    }

    return 0;
}
