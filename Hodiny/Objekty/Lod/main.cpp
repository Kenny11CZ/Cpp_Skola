#include <stdio.h>
#include "lod.h"

int main()
{
    Lod *ParniceQ;
    ParniceQ = new Lod("Test", 5, 2000, "ponorka");
    ParniceQ->Vypis();
    LetadlovaLod *Aurora;
    Aurora = new LetadlovaLod("Aurora", 200, 5456445, 25);
    Aurora->Vypis();

    return 0;
}
