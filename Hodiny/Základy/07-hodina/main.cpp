#include <stdio.h>

int main(int argc, char *argv[])
{
    int pole[10];
    for(int i = 0;i<10;i++){
        pole[i] = i;
    }
    for(int i = 0;i<10;i++){
        printf("%d",pole[i]);
    }
    return 0;
}
