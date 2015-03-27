#include <stdio.h>
void NactiCisla(FILE *soubor, int cisla[], int velikost){
    printf("Nacteni dat ze souboru...\n");
    for(int i = 0; i<velikost; i++){
        fscanf(soubor, "%d", &cisla[i]);
    }
    fclose(soubor);
}
void UlozCisla(int cisla[], int velikost){
    printf("Ukladani dat do souboru...\n");
    FILE * soubor;
    soubor = fopen("cisla.txt", "wt");
    fprintf(soubor, "");
    fclose(soubor);
    soubor = fopen("cisla.txt", "at");
    for(int i = 0; i<velikost; i++){
        if(cisla[i]!=0)
            fprintf(soubor, "%d\n", cisla[i]);
    }
    fclose(soubor);
    printf("Ulozeno.\n");
}
void VypisPole(int cisla[], int velikost){
    printf("Vypis pole...\n");
    for(int i = 0; i<velikost; i++){
        if(cisla[i]!=0)
            printf("%d: %d\n", i, cisla[i]);
    }
}
int NajdiMax(int pole[], int velikost)
{
    int max=0;
    for(int i=0;i<velikost;++i)
        if(pole[max]<pole[i])
            max = i;
    return max;
}
void SetridPole(int cisla[], int velikost){
    printf("Tridim pole...\n");
    for(int i=0;i<velikost-1;++i)
    {
        int max = NajdiMax(cisla+i, velikost-i);
        int tmp = cisla[max+i];
        cisla[max+i] = cisla[0+i];
        cisla[0+i] = tmp;
    }
}


int main()
{
    int velikost = 0;
    FILE *soubor;
    soubor = fopen("test.txt", "rt");
    printf("%d", soubor);
    fscanf(soubor, "%d", &velikost);

    int cisla[1000] = {0};
    NactiCisla(soubor, cisla, velikost);
    VypisPole(cisla, velikost);
    SetridPole(cisla, velikost);
    VypisPole(cisla, velikost);
    UlozCisla(cisla, velikost);

    return 0;
}
