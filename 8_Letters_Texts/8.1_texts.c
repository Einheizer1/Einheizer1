#include <stdio.h>
#include <string.h>

int main(){
    // definition
    char designation_one[30];
    char designation_two[30];

    // allocation of text
    strcpy(designation_one, "Apple");

    // allocation of variable
    strcpy(designation_two, designation_one);

    return 0;
}