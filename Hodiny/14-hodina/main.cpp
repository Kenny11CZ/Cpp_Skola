#include <stdio.h>
#include <string.h>

void concatenate_string(char *original, char *add)
{
   while(*original)
      original++;

   while(*add)
   {
      *original = *add;
      add++;
      original++;
   }
   *original = '\0';
}

int main(int argc, char *argv[])
{
    FILE * soubor;
    FILE * soubor2;
    char jmeno[100];
    char jmeno2[100];
    printf("Zadejte jmeno zdrojoveho souboru: ");
    scanf("%s", jmeno);
    concatenate_string(jmeno, ".txt");
    soubor = fopen(jmeno, "rt");
    //printf("Debug> soubor1=%d", soubor);
    while(soubor == 0){
        printf("\nSoubor neexistuje.");
        printf("\nZadejte jmeno zdrojoveho souboru: ");
        scanf("%s", jmeno);
    }
    printf("Zadejte jmeno ciloveho souboru: ");
    scanf("%s", jmeno2);
    concatenate_string(jmeno2, ".txt");
    soubor2 = fopen(jmeno2, "rt");
    char temp[100];
    fscanf(soubor2, " %s", temp);
    if(soubor2 == 0){
        printf("\nSoubor neexistuje, vytvarim...");
    }
    soubor2 = fopen(jmeno2, "at");
    char string[100];
    while(fscanf(soubor, " %[^\n]", string) != EOF){
        printf("\n%s > %s - %s",jmeno, jmeno2, string);
        fprintf(soubor2, string);
    }


    printf("\n");
    fclose(soubor);
    fclose(soubor2);
    return 0;
}
