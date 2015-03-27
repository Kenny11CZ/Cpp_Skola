#include <stdio.h>
#include "dum.h"

int main()
{
    Dum *domecek;
    domecek = new Dum("Dum", 5,2);
    domecek->Vypis();
    Panelak *panelak;
    panelak = new Panelak(15,3,3);
    panelak->Vypis();
    return 0;
}
