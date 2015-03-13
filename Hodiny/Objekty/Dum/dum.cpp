#include "dum.h"
#include <string.h>
#include <stdio.h>


Dum::Dum(int pocetMistnosti, int pocetVchodDveri, int pocetKominu, const char typ[])
{
    this->pocetMistnosti = pocetMistnosti;
    this->pocetVchodDveri = pocetVchodDveri;
    this->pocetKominu = pocetKominu;
    strcpy(this->typ, typ);
}

void Dum::Vypis()
{
    printf("Typ: %s", this->typ);
    printf("Pocet mistnosti: %d\n", this->pocetMistnosti);
    printf("Pocet vchodovych dveri: %d\n", this->pocetVchodDveri);
    printf("Pocet kominu: %d\n", this->pocetKominu);
}


Panelak::Panelak(int pocetMistnosti, int pocetSchodist, int pocetVytahu) : Dum(pocetMistnosti, 1, 0, "Panelak")
{
    this->pocetSchodist = pocetSchodist;
    this->pocetVytahu = pocetVytahu;
}

void Panelak::Vypis()
{
    Dum::Vypis();
    printf("Pocet schodist: %d\n", this->pocetSchodist);
    printf("Pocet vytahu: %d\n", this->pocetVytahu);
}
