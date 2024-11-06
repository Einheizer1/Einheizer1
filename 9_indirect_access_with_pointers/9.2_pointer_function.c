#include <stdio.h>
// two  values are sent
void change_over_value(double value_one, double value_two)
{
    value_one = value_one * 0.9;
    value_two = value_two * 0.9;
}

// two adresses are sent
void change_over_pointer(double *pointer_one, double *pointer_two)
{
    *pointer_one = *pointer_one * 0.9;
    *pointer_two = *pointer_two * 0.9;
}

int main(){
    double price_apple = 1.50, price_banana = 0.90;

    // first attempt to change
    change_over_value(price_apple, price_banana);
    printf("Prices: %.2f %.2f\n", price_apple, price_banana);

    // second attempt to change
    change_over_pointer(&price_apple, &price_banana);   
    printf("Prices: %.2f %.2f\n", price_apple, price_banana);

    return 0;
}