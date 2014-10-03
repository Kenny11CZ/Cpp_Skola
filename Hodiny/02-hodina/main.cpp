#include <stdio.h>

int main(int argc, char *argv[])
{
    /*
    //Promenne
    int a;
    //Vstup
    scanf("%d", &a);
    //Podminka pokud a je vetsi nez 0 tj. kladne
    if(a > 0){
        printf("Some shit\n");
    }
    */

    /*---Kalkulacka
    float a,b,x;
    printf("Vitejte v kalkulacce linearnich rovnic.\n\nTvar rovnice:ax+b=0\n");
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    x=(0-b)/2;
    printf("Vysledek je: %f\n",x);
    */

    float a,b,c;
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);
    if(a+c>b){
        printf("Trojuhelnik je mozne sestavit.");
    }
    else printf("trojuhelnik neexistuje");
    return 0;
}
