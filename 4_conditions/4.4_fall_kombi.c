#include <stdio.h>
int main()
{
    double preis_apfel = 1.45, preis_birne = 0.85, preis_banane = 0.75;

    // Logisches Und &&
    if(preis_birne < 1.0 && preis_banane < 1.0)
        printf("Beide Artikel sind billig\n");
    
    // Logisches Oder ||
    if(preis_apfel > 0.99 || preis_birne > 0.99)
        printf("Mindestens einer der Artikel ist teuer\n");

    // Logische Nicht !
    if(!(preis_banane > 0.99))
        printf("Artikel ist nicht teuer\n");

    return 0;
}