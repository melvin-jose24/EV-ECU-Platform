#include <stdint.h>
#include <stdio.h>

int print_array(int32_t *array, int32_t size){
    uint32_t sum = 0;
    for(int32_t i = 0; i < size; i++){
        sum = sum + *(array + i);
    }
    return sum;
}

int main(void) {
    int32_t my_array[] = {10, 20, 30, 40, 50};
    int32_t size = sizeof(my_array) / sizeof(my_array[0]);

    uint32_t sum = print_array(my_array, size);

    printf("SUM IS : %d", sum);

    return 0;

}