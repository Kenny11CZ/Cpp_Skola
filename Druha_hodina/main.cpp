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

    float a,b,x;
    printf("Vitejte v kalkulacce linearnich rovnic.\n\nTvar rovnice:ax+b=0\n");
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    x=(0-b)/2;
    printf("Vysledek je: %f\n",x);
    return 0;
}
