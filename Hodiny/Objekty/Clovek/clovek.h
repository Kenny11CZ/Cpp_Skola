#ifndef CLOVEK_H
#define CLOVEK_H

class Mazlicek
{
public:
    Mazlicek(const char typ[], const char jmeno[], int vek, float spotreba);
    void Vypis();
    void NastavVek(int vek);
    void NastavTyp(const char typ[]);
    void NastavJmeno(const char jmeno[]);
    void NastavSpotrebu(float spotreba);
    void Spotrebovano(int dni);
    char jmeno[100];
    char typ[100];
    int vek;
    float spotreba;
};

class Pes: public Mazlicek{
public:
    Pes(const char jmeno[], int vek);
};

class Clovek
{
public:
    Clovek();
    void JeZivy();
    void JeSvobodny();
    void ZmenZivot();
    void Vypis();
    void NastavVek(int vek);
    void NastavJmeno(const char jmeno[]);
    void NastavPrijmeni(const char prijmeni[]);
    char jmeno[100];
    char prijmeni[100];
    int zivy;
    int svobodny;
    int vek;
    int velikost_bot;
    Mazlicek *jedna;
};



#endif // CLOVEK_H
