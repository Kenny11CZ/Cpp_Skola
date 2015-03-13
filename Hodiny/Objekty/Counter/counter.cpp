#include "counter.h"
#include <stdio.h>

Counter::Counter()
{
    this->Resetovat();
}

void Counter::Navis(int x)
{
    this->pocet+=x;
}

void Counter::Sniz(int x)
{
    this->pocet-=x;
}

void Counter::Vypis()
{
    printf("Aktualne: %d\n", this->pocet);
}

void Counter::Resetovat()
{
    this->pocet = 0;
}
