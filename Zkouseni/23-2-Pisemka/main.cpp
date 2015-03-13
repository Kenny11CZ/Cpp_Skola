#include <stdio.h>
#include "vozidlo.h"

int main()
{
    Vozidlo *m8;
    m8 = new Vozidlo("n00b", 5, 6.1);
    m8->Vypis();
    Osobak *mlg;
    mlg = new Osobak("rektfull", 322);
    mlg->Vypis();
    return 0;
}
