#include "helloworld.h"
#include <stdio.h>

HelloWorld::HelloWorld()
{
}

void HelloWorld::Pozdrav()
{
    printf("Ahoj svete!");
}

int HelloWorld::Soucet(int a, int b){
    return a+b;
}
