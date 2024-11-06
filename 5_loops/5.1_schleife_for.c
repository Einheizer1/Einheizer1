#include <stdio.h>
int main()
{
    int anzahl, nummer;
    double preis, summe_rechnung;

    // Startwert
    summe_rechnung = 0.0;

    // Regelmaessige Wiederholung
    for(nummer = 1; nummer < 4; nummer = nummer + 1)
    {
        // Eingabe
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);

        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        // Berechnung
        summe_rechnung = summe_rechnung + anzahl * preis;
    }

    // Ausgabe
    printf("Summe der Rechnung: %.2f Euro\n", summe_rechnung);

    return 0;
}