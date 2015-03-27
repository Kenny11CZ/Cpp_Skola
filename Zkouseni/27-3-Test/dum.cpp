#include "dum.h"
#include <string.h>
#include <stdio.h>

Dum::Dum(const char funkce[], int mistnosti, int dveri)
{
    strcpy(this->funkce, funkce);
    this->dveri = dveri;
    this->mistnosti = mistnosti;
}

void Dum::Vypis()
{
    printf("-------------Dum------------\n");
    printf("Funkce: %s\n", this->funkce);
    printf("Mistnosti: %d   | Dveri: %d\n", this->mistnosti, this->dveri);
    printf("Naklady: %.2f\n", this->Naklady());
}

float Dum::Naklady()
{
    return 800*this->mistnosti;
}


Panelak::Panelak(int mistnosti, int dveri, int bytu):Dum("Panelak", mistnosti, dveri)
{
    this->bytu = bytu;
}


void Panelak::Vypis()
{
    printf("-----------Panelak----------\n");
    printf("Funkce: %s\n", this->funkce);
    printf("Mistnosti: %d   | Dveri: %d\n", this->mistnosti, this->dveri);
    printf("Prum. mistn.: %.1f\n", this->PrumerMistnosti());
}

float Panelak::PrumerMistnosti()
{
    return this->mistnosti/this->bytu;
}
