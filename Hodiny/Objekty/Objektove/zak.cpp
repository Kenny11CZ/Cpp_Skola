#include <string.h>
#include <stdio.h>
#include "zak.h"

Zak::Zak(char *jmeno, int vek, int znamka)
{
    strcpy(this->jmeno, jmeno);
    //this->jmeno = jmeno;
    this->vek = vek;
    this->prumer = znamka;
    printf("Vytvarim noveho zaka.\n Jmeno: %s\n Vek: %d\n Znamka: %d\n\n", jmeno, vek, znamka);
}

void Zak::PridatZnamku(int znamka)
{
    prumer = (prumer+znamka)/2;
    printf("(%d)Novy prumer: %.2f\n",znamka, prumer);
}
