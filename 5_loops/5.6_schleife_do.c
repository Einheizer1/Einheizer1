#include <stdio.h>
int main()
{   
    // initializing values
    int anzahl, noch_einer;
    double preis;

    do
    {
        // bedingung 1
        do
        {
            printf("Artikel eingeben: ");
            scanf("%d", &anzahl);

            if(anzahl < 0)
                printf("Anzahl muss positiv sein\n");
        }
        while(anzahl < 0);
        
        do
        {
            printf("Preis in Euro eingeben: ");
            scanf("%lf", &preis);

        // bedingung 1
            if(preis > 10)
                printf("Preis muss kleiner als 10 Euro sein\n");
        
        while(preis > 10);

        // bedingung 2
        if(preis < 0)
            printf("Preis muss positiv sein\n");
        }
        while(preis < 0);

        // ausgabe
        printf("Anzahl: %d\n", anzahl);
        printf("Preis: %.2lf Euro\n", preis);
 
        printf("Noch eine Berechnung? (Ja=1, Nein=0)");
        scanf("%d", &noch_einer);
    }
    while(noch_einer == 1);
}