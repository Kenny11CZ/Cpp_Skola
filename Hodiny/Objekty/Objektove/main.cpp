#include <stdio.h>
#include <stdlib.h>
#include "helloworld.h"
#include "zak.h"

int main()
{
    Zak *y = new Zak("jmeno", 15, 5);
    y->PridatZnamku(1);
    for(int i = 0; i<6;i++){
        y->PridatZnamku(rand()%5+1);
    }
    return 0;
}
