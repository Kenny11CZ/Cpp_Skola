#ifndef DUM_H
#define DUM_H

class Dum
{
public:
    Dum(char const funkce[], int mistnosti, int dveri);
    char funkce[100];
    int mistnosti;
    int dveri;
    void Vypis();
    float Naklady();
};
class Panelak:Dum
{
public:
    Panelak(int mistnosti, int dveri, int bytu);
    int bytu;
    void Vypis();
    float PrumerMistnosti();
};

#endif // DUM_H
