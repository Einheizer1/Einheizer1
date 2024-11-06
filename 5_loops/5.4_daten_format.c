#include <stdio.h>
int main()
{
    int anzahl_apfel = 12, anzahl_radio = 2;
    double preis_apfel = 1.45, preis_radio = 109.95;

    // Ausgabe fuer Tabelle von ganzen Zahlen,
    // teilweise mit fuehrenden Nullen

    printf("Anzahl\n");
    printf("%6d\n", anzahl_apfel);
    printf("%06d\n", anzahl_radio);

    // Ausgabe fuer Tabelle von Zahlen mit Nachkommastelle
    printf("\n        Preis\n");
    printf("%8.2f Euro\n", preis_apfel);
    printf("%8.2f Euro\n", preis_radio);

    return 0;
}