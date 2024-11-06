#include <stdio.h>
int main()
{
    double preis = 1.85;

    // Falls Bedingung zutrifft
    if(preis > 0.99)
        printf("Ein teurer Artikel\n");

    // Ansonsten, falls also Bedingung nicht zutrifft
    else
    {
        printf("Ein billiger Artikel\n");
        printf("Den nehmen wir\n");
    }
    return 0;
}