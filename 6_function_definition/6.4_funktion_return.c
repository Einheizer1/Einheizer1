#include <stdio.h>

// Definition einer Funktion
double berechne_gesamt(int anzahl, double preis_einzel)
{
    double preis_gesamt;
    preis_gesamt = anzahl * preis_einzel;
    return preis_gesamt;
}

int main()
{
    // Initialize varaibles
    int anzahl_apfel = 3, anzahl_birne = 2;
    double preis_apfel = 1.45, preis_birne = 0.85;
    double preis_gesamt;

    // Aufruf der Funktion, mit Rueckgabe an Variable
    preis_gesamt = berechne_gesamt(anzahl_apfel, preis_apfel);
    printf("%.2f Euro\n", preis_gesamt);

    // Aufruf der Funktion, mit direkter Ausgabe
    printf("%.2f Euro\n", berechne_gesamt(anzahl_birne, preis_birne));

    return 0;
}