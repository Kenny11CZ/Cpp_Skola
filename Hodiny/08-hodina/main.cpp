#include <stdio.h>
#include <stdlib.h>

void inicializuj(int pole[], int velikost){
    for(int i=0; i<velikost; i++){
        pole[i]=i;
    }
}
void vypis(int pole[], int velikost){
    for(int i=0; i<velikost; i++){
        printf("Hodnota cisla %d je: %d\n", i, pole[i]);
    }
}
void navyseni(int pole[], int velikost){
    int kolik;
    printf("O kolik: ");
    scanf("%d", &kolik);
    for(int i = 0; i<velikost;i++){
        pole[i] += kolik;
    }
}
void zadani(int pole[], int velikost){
    for(int i = 0; i<velikost;i++){
        printf("Zadejte hodnotu %d (%d): ", i, pole[i]);
        scanf("%d", &pole[i]);
    }
}
void clear(){
    system("cls");
}
void odsazeni(){
    printf("-------------\n");
}
void napoveda(){
    printf("Zadejte 'X' k ukonceni. \n");
    printf("Zadejte 'I' k inicializaci pole. \n");
    printf("Zadejte 'V' k vypisu pole. \n");
    printf("Zadejte 'Z' k zadani hodnot pole. \n");
    printf("Zadejte '+' k navyseni pole. \n");
    printf("Zadejte 'C' k vycisteni obrazovky. \n");
}
int main()
{
    int velikost;
    printf("Program na pole... \n");
    printf("Zadejte velikost pole: ");
    scanf("%d", &velikost);
    int pole[velikost];
    char znak = 'A';
    while(znak!='X')
    {
        odsazeni();
        napoveda();
        scanf(" %c", &znak);
        switch(znak){
        case 'X':
            break;
        case 'I':
            clear();
            inicializuj(pole, velikost);
            break;
        case 'V':
            clear();
            vypis(pole, velikost);
            break;
        case 'Z':
            clear();
            zadani(pole, velikost);
            clear();
            break;
        case '+':
            clear();
            navyseni(pole, velikost);
            break;
        case 'C':
            clear();
            break;
        default:
            printf("Zadal jsi spatny znak. \n");
            break;
        }


    }
    return 0;
}
