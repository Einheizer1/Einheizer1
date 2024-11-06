#include <stdio.h>
int main()
{
    // definition, partly with initializing
    int num_array[3] = {2, 7, 3};
    double single_price[3] = {1.45, 0.85, 0.75};
    int index;
    double total_price;

    // output calculation
    printf("Index  Number  Single price  Total price\n");
    for(index = 0; index < 3; index++)
    {
        total_price = num_array[index] * single_price[index];
        printf("%5d %7d %8.2f Euro %7.2f Euro\n", index+1,
            num_array[index], single_price[index], total_price);
    }
    printf("\n");
    
    return 0;
}