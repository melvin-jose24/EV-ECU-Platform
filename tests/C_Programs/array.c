#include <stdint.h>
#include <stdio.h>

void print_array(int32_t *array, int32_t size){

    for(int32_t i = 0; i < size; i++){
        *(array + i) = *(array + i) * 2;
    }
}

int main(void) {
    int32_t my_array[] = {2, 4, 6, 8, 10};
    int32_t size = sizeof(my_array) / sizeof(my_array[0]);

    print_array(my_array, size);

    for(int32_t i = 0; i < size; i++){
        printf("%d\n", *(my_array + i));
    }

    return 0;

}