#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void VypisPole(int pole[], int velikost){
    for(int i = 0; i<velikost; i++){
        printf("%d ", pole[i]);
    }
    printf("\n");
}
void BubbleSort(int pole[], int velikost){
    for(int i=0;i<velikost-1;++i)
    {
        for(int j=0;j<velikost-1-i;++j)
        {
            if(pole[j+1]>pole[j])
            {
                int tmp = pole[j];
                pole[j] = pole[j+1];
                pole[j+1] = tmp;
            }
        }
    }
}
int main()
{
    int cislo;
    FILE *soubor;
    soubor = fopen("cisla.txt", "rt");
    scanf("%d", &cislo);
    int pole[cislo];
    for(int i = 0; i<cislo; i++){
        fscanf(soubor, "%d", &pole[i]);
    }
    BubbleSort(pole, cislo);
    VypisPole(pole, cislo);
    //slozene = (char *) malloc(strlen(slovo) + strlen(slovo2) +2);
    return 0;
}
