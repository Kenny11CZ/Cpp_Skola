#ifndef BOD_H
#define BOD_H

class Bod
{
public:
    Bod(int x, int y);
    int x, y;
};

class Usecka
{
public:
    Usecka(Bod *jedna, Bod *dva);
    Bod *A,*B;
    float Delka();
};

class Trojuhelnik
{
public:
    Trojuhelnik(Bod *A, Bod *B, Bod *C);
    Bod *A,*B,*C;
    float Obvod();
    float Obsah();
};

#endif // BOD_H


