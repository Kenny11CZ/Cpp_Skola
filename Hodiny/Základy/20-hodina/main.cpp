#include <stdio.h>
#include <stdlib.h>
void PrikladJedna(){
    int pocet;
    int * p;
    int ukazatel = 0;
    printf("Zadejte velikost: ");
    scanf("%d", &pocet);
    p = (int *) malloc(sizeof(int)*pocet);
    while(ukazatel<pocet)
    {
        scanf("%d", &p[ukazatel]);
        ukazatel++;
        printf("nacteno %d cisel z velikost %d \n", ukazatel, pocet);
    }
    for(int i=0;i<ukazatel;++i)
        printf("%d ", p[i]);
    printf("\n");
    for(int i=0;i<ukazatel;++i)
        printf("%d ", p[pocet-i-1]);
}
void BubbleSort(int *pole, int velikost){
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
void NaplnPole(int *pole, int velikost, int offset){
    for(int i = offset; i<velikost; i++){
        pole[i] = i;
    }
}
void VypisPole(int *pole, int velikost){
    for(int i=0;i<velikost;++i)
        printf("%d ", pole[i]);
    printf("\n");
}
void MeneniVelikosti(){
    int * p;
    int cislo, puvodni = 0;
    printf("Zadejte velikost: ");
    scanf("%d", &cislo);
    p = (int *) malloc(sizeof(int)*cislo);
    while(true)
    {
        puvodni += cislo;
        scanf("%d", &cislo);
        if(cislo == -1){
            BubbleSort(p, puvodni);
            VypisPole(p, puvodni);
            puvodni -= cislo;
            continue;
        }
        printf("Nafukuji pole o velikost %d(puvodni %d)\n", cislo, puvodni);
        p = (int *) realloc(p, sizeof(int) * (puvodni+cislo));
        printf("Naplnuji pole\n");
        NaplnPole(p,puvodni+cislo,puvodni-cislo);
        VypisPole(p,puvodni+cislo);
    }
}

int main()
{
    MeneniVelikosti();
    return 0;
}
