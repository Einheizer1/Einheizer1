#include <stdio.h>
int main(){
    int array_num[3];
    double array_price[3];
    int index;

    // input
    for(index = 0; index < 3; index++){
        printf("Item %d, Number: ", index+1);
        scanf("%d", &array_num[index]);
        printf("Item %d, Price: ", index+1);
        scanf("%lf", &array_price[index]);
    }

    // simple output
    for(index = 0; index < 3; index++)
        printf("%3d %.2f\n",
            array_num[index], array_price[index]);

    return 0;
}