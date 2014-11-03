#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char jmeno[100];
    printf("Zadejte jmeno souboru: ");
    scanf("%s", jmeno);
    FILE * soubor;
    float soucet = 0;
    soubor = fopen(jmeno, "rt");
    if(soubor == NULL){
        printf("Nenalezeno %s\n", jmeno);
        soubor = fopen(jmeno, "wt");
        soubor = fopen(jmeno, "rt");
    }
    float string;
    while(fscanf(soubor, " %f", &string) != EOF){
        printf("%.1f\n", string);
        soucet += string;
    }
    printf("Nalezen konec.\n");
    printf("Soucet: %.2f\n", soucet);
    fclose(soubor);
    return 0;
}
