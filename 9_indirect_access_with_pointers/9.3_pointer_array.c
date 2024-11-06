#include <stdio.h>

// simple output of values of a double-array
void output_array(double *d_array, int size)
{
    int index;

    for(index = 0; index < size; index++)
        printf("Value %d: %.2f\n", index+1, d_array[index]);
    printf("\n");
}

int main(){
    double price_veggie_array[5] = {1.45, 0.85, 2.10, 1.35, 0.55};
    double price_fish_array[3] = {2.75, 1.65, 3.40};

    // output
    output_array(price_veggie_array, 5);
    output_array(price_fish_array, 3);

    return 0;
}