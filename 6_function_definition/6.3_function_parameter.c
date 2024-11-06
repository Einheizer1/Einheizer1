#include <stdio.h>

// Definition einer Funktion
void ausgabe_gesamt(int anzahl, double preis_einzel)
{
    double preis_gesamt;
    preis_gesamt = anzahl * preis_einzel;
    printf("%.2f Euro\n", preis_gesamt);
}

int main()
{
    int anzahl_apfel = 3, anzahl_birne = 2;
    double preis_apfel = 1.45, preis_birne = 0.85;

    // Mehrfacher Aufruf der funktion
    ausgabe_gesamt(anzahl_apfel, preis_apfel);
    ausgabe_gesamt(anzahl_birne, preis_birne);

    return 0;

}