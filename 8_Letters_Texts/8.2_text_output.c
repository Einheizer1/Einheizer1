#include <stdio.h>
#include <strings.h>

int main(){
    // definition with initializing
    char designation[30] = {"Apple"};

    // output string
    printf("Designation: %s\n", designation);

    // output single letters
    printf("First element: %c\n", designation[0]);
    printf("Tenth element: %c\n", designation[9]);

    return 0;
}