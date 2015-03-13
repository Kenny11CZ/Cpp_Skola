#include "clovek.h"
#include <stdio.h>
#include <string.h>

Clovek::Clovek()
{
    printf("Zadejte pohlavi (m/z): ");
    scanf("%c", &this->pohlavi);
    printf("Zadejte rok narozeni: ");
    scanf("%d", &this->narozeni);
    printf("Zadejte velikost bot: ");
    scanf("%d", &this->velikost_bot);
    printf("Zadejte jmeno: ");
    scanf("%s", this->jmeno);
}

int Clovek::Vek()
{
    return 2015-this->narozeni;
}

void Clovek::ZmenPohlavi(char pohlavi)
{
    if(pohlavi == 'x'){
        if(this->pohlavi == 'm') this->pohlavi = 'z';
        else this->pohlavi = 'm';
    }
    else if(pohlavi == 'm' || pohlavi == 'z') this->pohlavi = pohlavi;

}

void Clovek::Vypsat(int debug)
{
    printf("\n--Vypis--\n");
    printf("Jmeno: %s\n", this->jmeno);
    printf("Vek: %d\n", this->Vek());
    if(debug == 1){
        printf("///Debug\\\\\\\n");
        printf("Pohlavi: %c\n", this->pohlavi);
        printf("Narozeni: %d\n", this->narozeni);
        printf("Velikost bot: %d\n", this->velikost_bot);
    }
    printf("\n");

}
