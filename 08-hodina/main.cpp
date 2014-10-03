#include <stdio.h>

void inicializuj(int pole[], int velikost){
    for(int i=0; i<velikost; i++){
        pole[i]=i;
    }
}

int main()
{
    int velikost;
    scanf("%d", &velikost);
    int pole[velikost];
    char znak = 'A';
    while(znak!='X')
    {
        printf("Program na pole... \n");
        printf("Zadejte 'X' k ukonceni. \n");
        printf("Zadejte 'I' k inicializaci pole. \n");
        scanf(" %c", &znak);
        switch(znak){
        case 'X':
            break;
        case 'I':
            inicializuj(pole, velikost);
            break;
        default:
            printf("Zadal jsi spatny znak. \n");
            break;
        }

    }

    return 0;
}
