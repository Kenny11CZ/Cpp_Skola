#include <stdio.h>

int main(int argc, char *argv[])
{
    /*
    //Promene
    int cele_cislo = 15;
    char znak;
    float pi = 3.14;
    //Vstup
    printf("Zadejte znak: ");
    scanf("%c", &znak);
    //Vystup
    printf("Char je: %c\n", znak);
    printf("Pi je: %f\n", pi);
    printf("Cele cislo je: %d\n\n", cele_cislo);
    //Konec
    */
    //Promene
    float x;
    float y;
    float vysledek;
    //Vstup
    printf("Prvni cislo: ");
    scanf("%f", &x);
    printf("Druhe cislo: ");
    scanf("%f", &y);
    //Vypocet a Vystup
    vysledek = x+y;
    printf("==========\n");
    printf("Soucet %f+%f=%f\n",x ,y , vysledek);
    vysledek = x-y;
    printf("Odecet %f-%f=%f\n",x ,y , vysledek);
    vysledek = x*y;
    printf("Soucin: %f*%f=%f\n",x ,y , vysledek);
    //Pokud je x a y rozdilne od 0
    if(x != 0 && y != 0){
        vysledek = x/y;
        printf("Deleni: %f/%f=%f\n",x ,y , vysledek);
    }



    return 0;
}
