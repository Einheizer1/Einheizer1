#include <stdio.h>
int main()
{
    double preis = 1.00;
    // Bedingte Ausfuehrung eines Blocks von Anweisungen
    if(preis > 0.99)
    {
        printf("Ein teurer Artikel\n");
        printf("Brauchen wir den wirklich?\n");
    }
    
    //Bedingte Ausfuehrung einer einzelnen Anweisung
    if(preis < 1.0)
    printf("Ein billiger Artikel\n");

    return 0;
}