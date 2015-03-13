#ifndef ZAK_H
#define ZAK_H

class Zak
{
public:
    Zak(char jmeno[], int vek, int znamka);
    void PridatZnamku(int znamka);
    char jmeno[];
    int vek;
    int pocetZnamek;
    float prumer;
};

#endif // ZAK_H
