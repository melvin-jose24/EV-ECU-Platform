
#include <stdint.h>
#include <stdio.h>


int32_t calculate_average(
    const int32_t *samples,
    size_t count,
    int32_t min_valid,
    int32_t max_valid,
    int32_t *average
){
    uint32_t count_val = 0;
    int64_t sum = 0;
    for(int i = 0; i< count; i++){
        if(samples[i] < min_valid || samples[i] > max_valid){
            
        }else{
            sum += samples[i];
            count_val++;
            
        }
        }
        if(count_val!=0){
            *average = (int32_t)(sum / count_val);
           } 
        if(count_val == 0){
                printf("FAILURE NO SAMPLES VALID\n");
                return 0;
            }
            else{
                printf("SUCESS\n");
                return 1;
            }
    
           
    }
    


int main(void)
{

    static const int32_t samples[] = {
    245, 251, 248, 900, 253, 249, 246, 255
};

    int32_t min_valid = 240;
    int32_t max_valid = 260;

    int32_t average = 0;

    calculate_average(samples, 8, min_valid, max_valid, &average);

    printf("%d\n", average);

    return 0;
}