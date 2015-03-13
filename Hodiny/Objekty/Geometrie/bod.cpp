#include "bod.h"

#include <stdio.h>
#include <math.h>

Bod::Bod(int x, int y)
{
    this->x = x;
    this->y = y;
}


Usecka::Usecka(Bod *jedna, Bod *dva)
{
    this->A = jedna;
    this->B = dva;
}

float Usecka::Delka()
{
    float vysledek;
    vysledek = (this->A->x-this->B->x)*(this->A->x-this->B->x);
    vysledek += (this->A->y-this->B->y)*(this->A->y-this->B->y);
    return sqrt(vysledek);
}


Trojuhelnik::Trojuhelnik(Bod *A, Bod *B, Bod *C)
{
    this->A = A;
    this->B = B;
    this->C = C;
}

float Trojuhelnik::Obvod()
{
    Usecka *a,*b,*c;
    float vysledek;
    a = new Usecka(this->B, this->C);
    b = new Usecka(this->A, this->C);
    c = new Usecka(this->A, this->B);
    vysledek = a->Delka()+b->Delka()+c->Delka();
    return vysledek;
}

float Trojuhelnik::Obsah()
{
    Usecka *a,*b,*c;
    float s = this->Obvod()/2;
    a = new Usecka(this->B, this->C);
    b = new Usecka(this->A, this->C);
    c = new Usecka(this->A, this->B);
    float vysledek = sqrt(s*(s-a->Delka())*(s-b->Delka())*(s-c->Delka()));
    return vysledek;
}
