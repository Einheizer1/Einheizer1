#include <stdio.h>
int main()
{
    // value decision
    int anzahl;
    double preis;
    
    // first line
    printf("Anzahl          Preis\n");


    for(anzahl = 1; anzahl < 11; anzahl = anzahl + 1)
    {
        preis = 1.45 * anzahl;

        // loop
        printf("%6.0d", anzahl);
        printf("%10.2f Euro\n", preis);
        
    }

    return 0;
}