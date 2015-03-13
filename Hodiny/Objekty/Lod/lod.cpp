#include "lod.h"
#include <string.h>
#include <stdio.h>


Lod::Lod(const char jmeno[], int posadka, int vztlak, const char typ[])
{
    strcpy(this->jmeno, jmeno);
    this->posadka = posadka;
    this->vztlak = vztlak;
    strcpy(this->typ, typ);
}

void Lod::Vypis()
{
    printf("--------------------------------\n");
    printf("Jmeno: %s   Typ: %s\n", this->jmeno, this->typ);
    printf("Posadka: %d   Vztlak: %d\n", this->posadka, this->vztlak);
    printf("Naklady na rok: %d\n", this->Naklady(12));
    printf("--------------------------------\n");
}

int Lod::Naklady(int mesice)
{
    return (int)(((posadka*40000)+200000)*mesice);
}


LetadlovaLod::LetadlovaLod(const char jmeno[], int posadka, int vztlak, int letadel) : Lod(jmeno, posadka, vztlak, "Letadlova lod" )
{
    this->letadel = letadel;
}

void LetadlovaLod::Vypis()
{
    printf("--------------------------------\n");
    printf("Jmeno: %s   Typ: %s\n", this->jmeno, this->typ);
    printf("Posadka: %d   Vztlak: %d\n", this->posadka, this->vztlak);
    printf("Letadel: %d\n", this->letadel);
    printf("Naklady na rok: %d\n", this->Naklady(12));
    printf("--------------------------------\n");
}

int LetadlovaLod::Naklady(int mesice)
{
    return (int)(((posadka*40000)+200000)*mesice+(10000*this->letadel));
}
