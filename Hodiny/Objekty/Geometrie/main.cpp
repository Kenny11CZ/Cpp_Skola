#include "bod.h"

#include <stdio.h>
#include <string.h>\

int main()
{
    Bod *a, *b, *c;
    a = new Bod(7,5);
    b = new Bod(8,2);
    c = new Bod(1,1);

    Usecka *p;
    p = new Usecka(a, b);
    printf("Delka usecky |A,B|: %.2f\n",p->Delka());

    Trojuhelnik *t;
    t = new Trojuhelnik(a,b,c);
    printf("Obvod trojuhelniku ABC: %.2f\n", t->Obvod());
    printf("Obsah trojuhelniku ABC: %.2f\n", t->Obsah());
    return 0;
}
