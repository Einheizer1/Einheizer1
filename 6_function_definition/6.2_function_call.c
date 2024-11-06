#include <stdio.h>

// definition der funktion mein_logo()
void mein_logo()
{
    printf("****************************************\n");
    printf("* Dieses Programm ist von Claus Clever *\n");
    printf("****************************************\n");   
}

int main()
{
    // Erster Aufruf der Funktion mein_logo()
    mein_logo();
    printf("Hello World\n");

    // Zweiter Aufruf der Funktion mein_logo()
    mein_logo();

    return 0;
}