#include "obdelnik.h"
#include <stdio.h>

obdelnik::obdelnik(float a, float b)
{
    this->a = a;
    this->b = b;
}

void obdelnik::ctverec()
{
    if(a==b) printf("Je to ctverec.\n");
}

void obdelnik::obvod()
{
    printf("Obvod je %.2f\n", (this->a+this->b)*2);
}

void obdelnik::obsah()
{
    printf("Obsah je %.2f\n", this->a*this->b);
}
