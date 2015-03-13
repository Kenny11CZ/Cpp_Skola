#ifndef VOZIDLO_H
#define VOZIDLO_H

class Vozidlo
{
public:
    Vozidlo(const char znacka[], float zrychleni, int maxRychlost, int pocetKol);
    void Vypis();
    int maxRychlost;
    float zrychleni;
    char znacka[100];
    int pocetKol;
};

class NakladniVozidlo:public Vozidlo
{
public:
    NakladniVozidlo(const char znacka[], float zrychleni, int nosnost);
    void Vypis();
    float ZatezNaKolo();
    int nosnost;
};

#endif // VOZIDLO_H
