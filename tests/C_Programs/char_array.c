
#include <stdint.h>
#include <stdio.h>

void print_array(const char *array, uint32_t size)
{
    for (uint32_t i = 0; i < size-1; i++) {
        printf("%c\n", array[i]);
    }
}

int main(void)
{
    char array[] = "STM32";

    uint32_t size = sizeof(array) / sizeof(array[0]);

    print_array(array, size);

    printf("Array size: %u\n", size);

    return 0;
}