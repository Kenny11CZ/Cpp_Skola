#ifndef VOZIDLO_H
#define VOZIDLO_H

class Vozidlo
{
public:
    Vozidlo(char const jmeno[], int pocetSedadel, float spotreba);
    void Vypis();
    float Spotrebovano(int kilometry);
    char jmeno[100];
    int pocetSedadel;
    float spotreba;
};

class Osobak:public Vozidlo
{
public:
    Osobak(char const typ[], int pocetSedadel);
    void Vypis();
    char typ[100];
};

#endif // VOZIDLO_H
