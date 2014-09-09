#include <stdio.h>

int main(int argc, char *argv[])
{
    int pocetCyklu;
    int i;
    printf("Zadej pocet cisel:");
    scanf("%d", &pocetCyklu);
    int cisla[pocetCyklu];
    printf("\n");
    for(i = 0 ; i < pocetCyklu ; i++){
        printf("Zadej cislo %d: ", i+1);
        scanf("%d", &cisla[i]);
    }
    printf("\n");
    printf("Zadal jsi cisla:\n");
    for(i=0;i<pocetCyklu;i++){
        printf("  %d: %d\n", i+1, cisla[i]);
    }
    return 0;
}
