#include <stdio.h>

int main()
{
    int velikost = 4;
    int pole[4][4] = {1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};
    for(int i = 0; i<velikost; i++){
        for(int j = 0; j<velikost; j++){
            printf("%d ", pole[i][j]);
        }
        printf("\n");
    }
    //Jednotkova matice
    /*
    int chyba = 0;
    for(int i = 0; i<velikost; i++){
        for(int j = 0; j<velikost; j++){
            if(pole[i][j] != 1){
                chyba = 1;
                break;
            }
        }
        if(chyba == 1) break;
    }
    printf("%d", chyba);
    */
    //----------------
    //Soumernost diagonal
    /*
    int chyba = 0;
    for(int i = 0; i<velikost; i++){
        printf("Hlavni: %d;Veldejsi: %d\n", pole[i][i], pole[i][velikost-1-i]);
        if(pole[i][i]!=pole[i][velikost-1-i]){
            chyba = 1;
            break;
        }
    }
    printf("%d", chyba);
    */
    //-----------------
    //Soucty diagonal
    /*
    int hlavni = 0;
    int vedlejsi = 0;
    for(int i = 0; i<velikost; i++){
        printf("Hlavni: %d;Veldejsi: %d\n", pole[i][i], pole[i][velikost-1-i]);
        hlavni += pole[i][i];
        vedlejsi += pole[i][velikost-1-i];
    }
    if(hlavni > vedlejsi) printf("Hlavni je vetsi");
    else if(hlavni < vedlejsi) printf("Vedlejsi je vetsi");
    else printf("Obe jsou stejne");
    return 0;
    */
    //-----------------
    //Nejaky sloupec > nez ctverec/3
    /*
    int sloupce[4] = {0};
    int sloupec = 0;
    float soucetCele = 0;
    for(int i = 0; i<velikost; i++){
        for(int j = 0; j<velikost; j++){
            soucetCele += pole[i][j];
            sloupce[i] += pole[i][sloupec];
        }
        sloupec++;
    }
    for(int i = 0; i<velikost; i++){
        if(sloupce[i]>soucetCele/3) printf("Sloupec %d(%d) > Cele/3(%.2f)",i,sloupce[i], soucetCele/3);
    }
    */
    //-----------------
    //prvni sloupec == prvni radek
    int sloupec = 0;
    int radek = 0;
    for(int i = 0; i<velikost; i++){
        radek += pole[0][i];
        sloupec += pole[i][0];
    }
    printf("Prvni sloupec: %d; Prvni radek: %d", sloupec, radek);
    if(sloupec == radek) printf("Rovnaji se!");

}
