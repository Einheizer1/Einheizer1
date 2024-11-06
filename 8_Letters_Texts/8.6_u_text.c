#include <stdio.h>

int main(){
    int index;
    int index_2;

    int quantity[5];
    double total_price[5];
    double single_price[5];
    double final_price;
    char item_name[5][30];

    do{
        printf("Calculation posts (min. 1, max. 5): ");
        scanf("%d", &index);
    }
    while(index <= 0 || index >= 6);

    index_2 = index;

    for(index = 0; index < index_2; index++){
        printf("Item %d, Definition: ", index+1);
        scanf("%s", item_name[index]);
        printf("Item %d, Quantity: ", index+1);
        scanf("%d", &quantity[index]);
        printf("Item %d, Price: ", index+1);
        scanf("%lf", &single_price[index]);
    }

    printf("Index  Definition  Quantity  Single price  Total price\n");

    for(index = 0; index < index_2; index++){
        total_price[index] = quantity[index] * single_price[index];

        printf("%5d  %-9s  %9d  %7.2f Euro %7.2f Euro\n",
            index+1,
            item_name[index],
            quantity[index],
            single_price[index],
            total_price[index]);
            
            final_price = final_price + total_price[index];
    }
    
    printf("Sum of calculation: %29.2f Euro ", final_price);
    return 0;
}