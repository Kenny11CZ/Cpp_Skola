#include <stdio.h>

void VypisRadek(int nradku, int cradku){
    int hvezd = 2*cradku-1;
    int mezer = nradku - cradku;
    for(int i = 0; i<mezer;i++) printf(" ");
    for(int i = 0; i<hvezd;i++) printf("*");
    printf("\n");
}


int main()
{
    /* Stromecek
    int pater, pocetPater, kmen;
    pater = 5;
    pocetPater = 3;
    kmen = 2;
    for(int j = 0; j<pocetPater;j++){
        for(int k = 0; k<pater;k++) VypisRadek(pater,k+1);
    }
    for(int j = 0; j<kmen;j++) VypisRadek(pater, 1);
    return 0;
    */

    /*Faktorial
    int faktorial;
    int vysledek = 1;
    printf("Zadejte faktorial: ");
    scanf("%d", &faktorial);
    for(int i = faktorial; i != 0; i--){
        vysledek = vysledek * i;
        printf("%d ", i);
        if(i!=1){
            printf("* ");
        }
        else printf("= %d", vysledek);
    }
    printf("\n\n");
    */
    int cisel;
    printf("Zadejte pocet cisel: ");
    scanf("%d", &cisel);
    float cisla[cisel];
    float soucet, prumer;
    for(int i = 0; i<cisel;i++){
        printf("Zadejte cislo %d: ", i+1);
        scanf("%f", &cisla[i]);
    }
    printf("Cisla:");
    for(int i = 0; i<cisel;i++){
        printf("%.2f;", cisla[i]);
        soucet = soucet + cisla[i];
    }
    printf("\n");
    prumer = soucet/cisel;
    printf("\nSoucet je: %f", soucet);
    printf("\nPrumer je: %f", prumer);
}
