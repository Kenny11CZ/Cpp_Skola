#include "obdelnik.h"
#include <stdio.h>

int main()
{
    float a,b;
    printf("Zadejte stranu A: ");
    scanf("%f", &a);
    printf("Zadejte stranu B: ");
    scanf("%f", &b);
    obdelnik pokus(a,b);
    pokus.ctverec();
    pokus.obsah();
    pokus.obvod();
    return 0;
}
