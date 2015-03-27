#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char jmeno[100];
    printf("Zadejte jmeno souboru: ");
    scanf("%s", jmeno);
    FILE * soubor;
    soubor = fopen(jmeno, "rt");
    if(soubor == NULL){
        printf("Nenalezeno %s\n", jmeno);
        soubor = fopen(jmeno, "wt");
        soubor = fopen(jmeno, "rt");
    }
    char string[100];
    while(fscanf(soubor, " %[^\n]", string) != EOF){
        printf("%s\n", string);
    }
    printf("Nalezen konec.\n");

    fclose(soubor);
    return 0;
}
