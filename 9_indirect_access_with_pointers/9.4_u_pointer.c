#include <stdio.h>

void input_function(double *v_array, int size){
    int index;

    for(index = 0; index < size; index++){
        printf("Value %d: ", index+1);
        scanf("%lf", &v_array[index]);
    }
}


void output_function(double *v_array, int size){
    int index;

    for(index = 0; index < size; index++)
        printf("Value %d: %.2f\n", index+1, v_array[index]);
}


double medium_value_calc(double *v_array, int size){
    double medium_value;
    double total_value;
    int index;

    for(index = 0; index < size; index++)
        total_value = total_value + v_array[index];
    
    medium_value = total_value / size;
    printf("Medium value: %.2f\n", medium_value);
}


int main(){
    double value_array[3];

    printf("Input of 3 values: \n");
    input_function(value_array, 3);

    printf("Output of 3 values: \n"); 
    output_function(value_array, 3);

    medium_value_calc(value_array, 3);

    return 0;
}