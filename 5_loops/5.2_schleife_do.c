#include <stdio.h>
int main()
{
    int anzahl, nummer, noch_einer;
    double preis, summe_rechnung;

    // Startwerte
    nummer = 1;
    summe_rechnung = 0.0;

    // Bedingte Wiederholung
    do
    {
        // Eingabe
        printf("Artikel %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);
        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        // Berechnung
        summe_rechnung = summe_rechnung + anzahl * preis;

        // Abfrage
        printf("Noch ein Artikel (Ja=1, Nein=0): ");
        scanf("%d", &noch_einer);

        // Laufende nummer erhoehen
        nummer = nummer + 1;
    }
    while(noch_einer == 1);

    // Ausgabe
    printf("Summe der Rechnung: %.2f Euro\n", summe_rechnung);

    return 0; 
}