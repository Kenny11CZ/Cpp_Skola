#include "auto.h"
#include <stdio.h>

int main()
{
    Auto *a;
    a = new Auto("Skoda Octavia", 200000);
    a->vypis();
    return 0;
}
