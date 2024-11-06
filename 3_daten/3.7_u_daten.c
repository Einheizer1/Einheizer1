#include <stdio.h>
int main()
    // item_1 -> melon -> 5 pieces -> 2.10 euro/piece
    // item_2 -> banana -> 2 pieces -> 1.60 euro/piece

{
    // declanation
    int anzahl_melon = 5, anzahl_banana = 2;
    double preis_melon = 2.10, preis_banana = 1.60;
    double summe_o_rabatt, summe_m_rabatt, rabatt;
 
    // calculation
    summe_o_rabatt = anzahl_melon * preis_melon +
                    anzahl_banana * preis_banana;
    rabatt = summe_o_rabatt / 100 * 20;
    summe_m_rabatt = summe_o_rabatt - rabatt;

    //Ausgabe
    printf("Gesamtpreis: %.2f Euro\n", summe_o_rabatt);
    printf("20% Rabatt: %.2f Euro\n", rabatt);
    printf("Preis nach Rabatt: %.2f Euro\n", summe_m_rabatt);

    return 0;
}