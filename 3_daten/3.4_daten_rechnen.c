#include <stdio.h>
int main()
{
    // Deklaration, teilweise mit Initialisierung
    int anzahl_apfel = 2, anzahl_birne = 4;
    double preis_apfel = 1.45, preis_birne = 0.85;
    double summe_rechnung, preis_mittel, preis_differenz;
    
    // Berechnung
    summe_rechnung = anzahl_apfel * preis_apfel
        + anzahl_birne * preis_birne;

    preis_mittel = summe_rechnung / (anzahl_apfel + anzahl_birne);
    preis_differenz = preis_apfel - preis_birne;

    // Ausgabe
    printf("Summer der Rechnung: %.2f Euro\n", summe_rechnung);
    printf("Mittlerer Preis: %.2f Euro\n", preis_mittel);
    printf("Preis-Differenz: %.2f Euro\n", preis_differenz);

    return 0;
}