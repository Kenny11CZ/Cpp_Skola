#ifndef AUTO_H
#define AUTO_H

class Auto
{
public:
    Auto(const char znacka[], int cena, int pocetKm = 0, int pocetKol = 4);
    float cenaUSD();
    void vypis();
    float kmZbyva();
    int pocetKolMetoda();
    int pocetKm;
    int cena;
    int pocetKol;
    char znacka[100];
};

#endif // AUTO_H
