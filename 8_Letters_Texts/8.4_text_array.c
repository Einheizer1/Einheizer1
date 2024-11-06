#include <stdio.h>
int main(){
    char definition_array[3][30];
    int index;

    // input
    for(index = 0; index < 3; index++)
    {
        printf("Item %d, Definition: ", index+1);
        scanf("%s", definition_array[index]);
    }

    // simple output
    for(index = 0; index < 3; index++)
        printf("%s\n", definition_array[index]);

    return 0;
}