#include <stdio.h>
int main()
{
    int anzahl, nummer, noch_einer;
    double preis, summe_rechnung;

    // Startwert
    nummer = 0;
    summe_rechnung = 0.0;
    
    // Abfrage
    printf("Wollen Sie Artikel eingeben (Ja=1, Nein=0)");
    scanf("%d", &noch_einer);

    // Bedingte Wiederholung, Pruefung vorher
    while(noch_einer == 1)
    {
        // Laufende Nummer erhoehn
        nummer = nummer + 1;

        // Eingabe
        printf("Artikel: %d, Anzahl: ", nummer);
        scanf("%d", &anzahl);
        printf("Artikel %d, Preis in Euro: ", nummer);
        scanf("%lf", &preis);

        // Berechnung
        summe_rechnung = summe_rechnung + anzahl * preis;

        // Abfrage
        printf("Noch ein Artikel (Ja=1, Nein=0)");
        scanf("%d", &noch_einer);
    }
    
    // Ausgabe
    if(nummer == 0)
        printf("Keine Einhabe\n");
    else
        printf("Summe der Rechnung: %.2f Euro\n", summe_rechnung);

    return 0;

}