#include "auto.h"
#include <string.h>
#include <stdio.h>

Auto::Auto(const char znacka[], int cena, int pocetKm, int pocetKol)
{
    strcpy(this->znacka, znacka);
    this->cena = cena;
    this->pocetKm = pocetKm;
    this->pocetKol = pocetKol;
}

float Auto::cenaUSD()
{
    return cena/25;
}

void Auto::vypis()
{
    char kol[5];
    if(this->pocetKolMetoda()==1) strcpy(kol, "Ano");
    else strcpy(kol, "Ne");
    printf("--------------------\n");
    printf("%s za %dKc (%.1fUSD)\n", this->znacka, this->cena, this->cenaUSD());
    printf("Najeto: %d\n", this->pocetKm);
    printf("Standartni pocet kol: %s\n", kol);
    printf("--------------------\n");
}

float Auto::kmZbyva()
{
    return 300000-this->pocetKm;
}

int Auto::pocetKolMetoda()
{
    if(this->pocetKol==4) return 1;
    else return 0;
}
