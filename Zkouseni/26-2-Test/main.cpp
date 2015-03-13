#include <stdio.h>
#include "clovek.h"

int main()
{
    //Vytvoril Dan Balarin 3.Ai
    //Nechraneno zadnou licenci, na tohle by ji ani neuznali...
    Clovek jedna;
    /*
    jedna.Vypsat(1);
    jedna.ZmenPohlavi();
    jedna.Vypsat(1);*/
    int moznost;
    while(true){
        printf("1. Vypsat\n2. Zmenit pohlavi\n3. Konec\n");
        scanf("%d", &moznost);
        switch (moznost) {
        case 1:
            jedna.Vypsat();
            break;
        case 1337:
            jedna.Vypsat(1);
            break;
        case 2:
            jedna.ZmenPohlavi();
            printf("Zmeneno...\n");
            break;
        case 3:
            return 0;
            break;
        default:
            printf("Spatna volba!\n");
            break;
        }
    }
    return 0;
}
