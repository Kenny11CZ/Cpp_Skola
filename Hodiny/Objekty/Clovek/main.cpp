#include "clovek.h"
#include <stdio.h>


int main()
{
    Pes *alik;
    alik = new Pes("Alik", 5);
    alik->Vypis();
    Clovek *karel;
    karel = new Clovek();
    karel->NastavVek(50);
    if(karel->jedna != NULL) karel->jedna->Vypis();
    return 0;
}
