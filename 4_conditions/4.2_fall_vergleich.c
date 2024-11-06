#include <stdio.h>
int main()
{
    double preis_apfel = 1.45, preis_birne = 0.85, preis_kiwi = 1.45;

    // bigger
    if(preis_apfel > preis_birne)
        printf("Apfel ist teurer als Birne\n");

    // smaller
    if(preis_birne < preis_kiwi)
        printf("Birne ist billiger als Kiwi\n");

    // bigger or equal
    if(preis_apfel >= preis_kiwi)
        printf("Apfel ist mindestens so teuer wie eine Kiwi\n");

    // smaller or equal
    if(preis_birne <= preis_kiwi)
        printf("Birne ist hoechstens so teuer wie Kiwi\n");

    // equal
    if(preis_apfel == preis_kiwi)
        printf("Apfel und Kiwi haben denselben Preis\n");

    // unequal
    if(preis_birne != preis_kiwi)
        printf("Birne und Kiwi haben unterschiedliche Preise\n");

    return 0;
}