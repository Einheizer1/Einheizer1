#include <stdio.h>
int main(){
    char definition_one[30] = {"Apple"};
    char definition_two[30] = {"Mandarine"};

    // output right-aligned
    printf("%15s Ende\n", definition_one);
    printf("%15s Ende\n", definition_two);

    // output left-aligned
    printf("\n");
    printf("%-15s Ende\n", definition_one);
    printf("%-15s Ende\n", definition_two);

    return 0;
}