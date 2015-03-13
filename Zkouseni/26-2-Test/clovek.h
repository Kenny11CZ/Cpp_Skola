#ifndef CLOVEK_H
#define CLOVEK_H

class Clovek
{
public:
    Clovek();
    char pohlavi;
    int narozeni;
    int velikost_bot;
    char *jmeno;
    //void Vek();
    int Vek();
    void ZmenPohlavi(char pohlavi = 'x');
    void Vypsat(int debug = 0);

};

#endif // CLOVEK_H
