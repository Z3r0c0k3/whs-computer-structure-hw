#include <stdio.h>

int is_bit_set(unsigned int value, int position) {
    return (value & (1 << position)) != 0;
}

unsigned int clear_bit(unsigned int value, int position) {
    return value & ~(1 << position);
}

int main() {
    unsigned int value;

    printf("Enter an integer: ");
    scanf("%u", &value);

    if (is_bit_set(value, 3)) {
        printf("3rd bit is set!\n");
        value = clear_bit(value, 3);
        printf("Value after clearing 3rd bit: %u\n", value);
    } else {
        printf("3rd bit is already not set!\n");
    }

    return 0;
}

