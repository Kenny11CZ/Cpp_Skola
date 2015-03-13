#ifndef DUM_H
#define DUM_H

class Dum
{
public:
    Dum(int pocetMistnosti, int pocetVchodDveri, int pocetKominu, char const typ[]);
    void Vypis();
    int pocetMistnosti;
    int pocetVchodDveri;
    int pocetKominu;
    char typ[50];
};
class Panelak : public Dum
{
public:
    Panelak(int pocetMistnosti, int pocetSchodist, int pocetVytahu);
    void Vypis();
    int pocetSchodist;
    int pocetVytahu;
};

#endif // DUM_H
