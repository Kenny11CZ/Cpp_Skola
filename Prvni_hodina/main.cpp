#include <stdio.h>

int main(int argc, char *argv[])
{
    //Promene
    int cele_cislo = 15;
    char znak;
    float pi = 3.14;
    //Vstup
    printf("Zadejte znak: ");
    scanf("%c", &znak);
    //Vystup
    printf("Char je: %c\n", znak);
    printf("Pi je: %f\n", pi);
    printf("Cele cislo je: %d\n\n", cele_cislo);
    //Konec
    return 0;
}
