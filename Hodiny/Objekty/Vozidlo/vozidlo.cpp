#include "vozidlo.h"
#include <string.h>
#include <stdio.h>

Vozidlo::Vozidlo(char znacka[], float zrychleni, int maxRychlost, int pocetKol)
{
    strcpy(this->znacka, znacka);
    this->maxRychlost = maxRychlost;
    this->zrychleni = zrychleni;
    this->pocetKol = pocetKol;
}

void Vozidlo::Vypis()
{
    printf("Jmeno: %s\n", this->znacka);
    printf("Max Rychlost: %d\n", this->maxRychlost);
    printf("Zrychleni: %f\n", this->zrychleni);
    printf("Pocet Kol: %d\n", this->pocetKol);
}


NakladniVozidlo::NakladniVozidlo(char znacka[], float zrychleni, int nosnost) : Vozidlo(znacka, zrychleni, 90, 8)
{
    this->nosnost = nosnost;
}

void NakladniVozidlo::Vypis()
{
    printf("Jmeno: %s\n", this->znacka);
    printf("Max Rychlost: %d\n", this->maxRychlost);
    printf("Zrychleni: %f\n", this->zrychleni);
    printf("Pocet Kol: %d\n", this->pocetKol);
    printf("Nosnost: %d\n", this->nosnost);
    printf("Zatez na kolo: %d\n", this->ZatezNaKolo());
}

float NakladniVozidlo::ZatezNaKolo()
{
    return this->nosnost/this->pocetKol;
}
