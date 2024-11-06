#include <stdio.h>

// definition of the first function
double table(double single_price)
{ 
    int num;
    double total_price;

    printf("\nNumber    Total price\n");
    
    // loop output veggies
    for(num = 1; num < 6; num = num + 1)
    {
        // calculation
        total_price = single_price * num;

        // output
        printf("%6.0d", num);
        printf("%10.2f Euro\n", total_price);
    }
}


// definition of the second function
double mid(double single_one, double single_two)
{
    int factor = 2;
    double mid_price;
    
    // calculation
    mid_price = (single_one + single_two) / factor;

    return mid_price;
}


int main()
{
    double apple = 1.45, pear = 0.85, banana = 0.75;

    table(apple);
    table(pear);
    table(banana);
    printf("\n");

    printf("The medium price of apple and pear "
            "is: %.2f Euro\n", mid(apple, pear));
    printf("The medium price of pear and banana "
            "is: %.2f Euro\n\n", mid(pear, banana));

    return 0;
}
