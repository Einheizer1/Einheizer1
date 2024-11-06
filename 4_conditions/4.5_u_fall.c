#include <stdio.h>
int main()
{
    int anzahl;
    double preis;
    double summe;
    double rabatt;
    double summe_m_r;

    // Erste Eingabe
    printf("Produktanzahl: ");
    scanf("%d", &anzahl);
    
    // Zweite Eingabe
    printf("Stueckpreis in Euro: ");
    scanf("%lf", &preis);

    // calculation
    summe = anzahl * preis;
    rabatt = summe * 0.2;
    summe_m_r = summe - rabatt;

    if(summe > 10)
    {
        printf("Anzahl: %d\n", anzahl);
        printf("Stueckpreis: %.2f Euro\n", preis);
        printf("Rabatt in Euro: %.2f Euro\n", rabatt);
        printf("Gesamtpreis: %.2f Euro\n", summe_m_r);
    }
    else
    {
        printf("Anzahl: %d\n", anzahl);
        printf("Stueckpreis: %.2f Euro\n", preis);
        printf("Gesamtpreis: %.2f Euro\n", summe);
    } 
    return 0;
}