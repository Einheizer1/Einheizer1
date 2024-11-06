#include <stdio.h>
int main(){
    // definition variable and pointer
    double price = 1.45;
    double *price_pointer;

    // pointer becomes adress of the variable
    price_pointer = &price;

    // output value of variable and pointer
    printf("%.2f\n", price);
    printf("%.2f\n", *price_pointer);

    return 0;
}