#include <stdio.h>
#include "kalkulacka.h"

Kalkulacka::Kalkulacka()
{
}

void Kalkulacka::NactiCisla()
{
    printf("Zadejte prvni cislo: ");
    scanf("%f", &this->cislo1);
    printf("Zadejte druhe cislo: ");
    scanf("%f", &this->cislo2);
    printf("\n");
}

void Kalkulacka::Secti()
{
    printf("%.2f+%.2f=%.2f", this->cislo1, this->cislo2, this->cislo1+this->cislo2);
    printf("\n");
}

void Kalkulacka::Odecti()
{
    printf("%.2f-%.2f=%.2f", this->cislo1, this->cislo2, this->cislo1-this->cislo2);
    printf("\n");
}

void Kalkulacka::Nasob()
{
    printf("%.2fx%.2f=%.2f", this->cislo1, this->cislo2, this->cislo1*this->cislo2);
    printf("\n");
}

void Kalkulacka::Del()
{
    if(this->cislo2!=0) printf("%.2f/%.2f=%.2f", this->cislo1, this->cislo2, this->cislo1/this->cislo2);
    else printf("Druhe cislo nesmi byt 0!");
    printf("\n");
}
