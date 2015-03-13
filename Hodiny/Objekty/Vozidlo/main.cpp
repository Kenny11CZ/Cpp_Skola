#include <stdio.h>
#include "vozidlo.h"

int main()
{
    Vozidlo *test;
    test = new Vozidlo("asd", 0, 50, 2);
    printf("%d", test->maxRychlost);
    NakladniVozidlo *nakladak;
    nakladak = new NakladniVozidlo("test", 0, 6);
    printf("%d", nakladak->nosnost);
    return 0;
}
