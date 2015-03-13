#include "vozidlo.h"
#include <string.h>
#include <stdio.h>

Vozidlo::Vozidlo(char const jmeno[], int pocetSedadel, float spotreba)
{
    strcpy(this->jmeno, jmeno);
    this->pocetSedadel = pocetSedadel;
    this->spotreba = spotreba;
}


void Vozidlo::Vypis()
{
    printf("------------------------------------------------\n");
    printf("Jmeno: %s   Typ: [Uknown]\n", this->jmeno);
    printf("Pocet sedadel: %d\n", this->pocetSedadel);
    printf("Spotreba /100: %.1f   Spotreba /37: %.1f\n", this->spotreba, this->Spotrebovano(37));
    printf("------------------------------------------------\n");
}

float Vozidlo::Spotrebovano(int kilometry)
{
    return (this->spotreba/100)*kilometry;
}


Osobak::Osobak(const char typ[], int pocetSedadel) : Vozidlo("Skoda", pocetSedadel, 5)
{
    strcpy(this->typ, typ);
}

void Osobak::Vypis()
{
    printf("------------------------------------------------\n");
    printf("Jmeno: %s   Typ: %s\n", this->jmeno, this->typ);
    printf("Pocet sedadel: %d\n", this->pocetSedadel);
    printf("Spotreba /100: %.1f   Spotreba /68: %.1f\n", this->spotreba, this->Spotrebovano(68));
    printf("------------------------------------------------\n");
}
