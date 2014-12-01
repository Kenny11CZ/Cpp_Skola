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

int main()
{
    int * p;
    int cislo, puvodni = 0;
    printf("Zadejte velikost: ");
    scanf("%d", &cislo);
    p = (int *) malloc(sizeof(int)*cislo);
    while(true)
    {
        scanf("%d", &cislo);
        if(cislo == -1)
            break;
        printf("Nafukuji pole o velikost %d(puvodni %d)\n", cislo, puvodni);
        p = (int *) realloc(p, sizeof(int) * (puvodni+cislo));
        printf("Naplnuji pole\n");
        NaplnPole(p,puvodni,cislo);
        VypisPole(p,puvodni+cislo);
                puvodni += cislo;
        /*if(ukazatel == pocet)
        {
            printf("Maximum dosazeno, nafouknout? y/n");
            char volba;
            scanf("%c", &volba);
            if(volba == 'y' || volba == 'Y'){
                pocet = pocet * 2;
                printf("Nafukuji pole na velikost %d\n", pocet);
                p = (int *) realloc(p, sizeof(int) * pocet);
                volba = 'n';
            }
        }*/
    }




    return 0;
}
