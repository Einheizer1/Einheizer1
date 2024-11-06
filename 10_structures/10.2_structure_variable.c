#include <stdio.h>
#include <string.h>
struct item_type{
    int quantity;
    double price;
    char definition[30];
};

int main(){
    // definition of variable in structure
    struct item_type item_one, item_two;

    // first item, allocation of component
    item_one.quantity = 2;
    item_one.price = 1.45;
    strcpy(item_one.definition, "Apple");

    // second item, allocation structure-variable
    item_two = item_one;

    return 0;
}