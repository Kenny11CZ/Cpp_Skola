#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    struct Zak{
        char jmeno[100];
        float prospech;
        int boty, cislo;
    };
    Zak *trida;
    trida = (Zak*)malloc(sizeof(Zak)*5);
    for(int i = 0;i<5;i++){
        trida[i].boty = 30+(i*2);
        trida[i].cislo = (int)i*i*i/5;
        trida[i].prospech = trida[i].boty/trida[i].cislo;
        strcpy(trida[i].jmeno, "Karel");
    }
    printf("---Evidence zaku---");
    for(int i = 0; i<5; i++){
        printf("Cislo: %d\nJmeno: %s\nVelikost bot: %d\nProspech: %.2f\n Obl. cislo: %d\n\n",i,trida[i].jmeno,trida[i].boty,trida[i].prospech,trida[i].cislo);
    }


    return 0;
}
