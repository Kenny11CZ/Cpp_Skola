#include <stdio.h>
#include <windows.h>


void barva(int);
void gotoxy(int,int);
void barva(int barvy)
{
        switch(barvy)
        {
            case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
                break;
            case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
                FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                break;
            case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
                break;
            case 4: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
                break;
            case 5: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
                break;
        }
}
int main(int argc, char *argv[])
{
    /* Kalkulacka linearnich rovnic
    float a,b,c,x;
    printf("Vitejte v me kalkulacce\nPokracejte zadanim rovnice ve tvaru ax+b=c");
    printf("\nA: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);
    if(a==0){
        if(b==c){
            printf("Nekonecno\n");
        }
        else printf("\nVysledek je: 0\n");
    }
    else{
        x=(c-b)/a;
        printf("\n\n%.1f * %.1f + %.1f = %.2f", a,x,b,c);
        printf("\nVysledek je: %.2f\n", x);
    }*/
    /* HRA
    char command;
    printf("(N)ew Game");
    printf("\n(L)oad Game");
    printf("\n(S)ettings");
    barva(4);
    printf("\n(X)REPORT!");
    barva(2);
   // while(true){
        printf("\n\nZadejte znak: ");
        scanf("%c", &command);
        switch(command){
            case 'n':
                for(int i = 0; i < 3; i++){
                    printf("Starting new game..");
                }
                break;
            case 'l':
                for(int i = 0; i < 3; i++){
                    printf("Loading game..");
                }
                break;
            case 's':
                printf("Nothing to change.");
                break;
            case 'x':
                barva(3);
                printf("Thanks for your help in making the Dota 2 community a friendlier place.");
                barva(2);
                break;
            default:
                printf("Bad char.");
                break;
        }

    //}

    printf("\n");
    */
    char slevaChar;
    int procentoSlevy, vzdalenost, cenaKm;
    float cena, sleva, dan;
    printf("Taxametr\n");
    printf("Zadejde slevovy kupon: ");
    scanf("%c", &slevaChar);
    printf("Zadejde dan: ");
    scanf("%f", &dan);
    switch (slevaChar) {
        case 'a':
            procentoSlevy = 20;
            break;
        case 'b':
            procentoSlevy = 30;
            break;
        case 'c':
            procentoSlevy = 50;
            break;
        default:
            procentoSlevy = 0;
            break;
    }
    printf("Zadejte ujetou vzdalenost: ");
    scanf("%d", &vzdalenost);
    if(vzdalenost > 100){
        if(vzdalenost > 200){
            if(vzdalenost > 500){
                if(vzdalenost > 1000){
                    cenaKm = 8;
                }
                else cenaKm = 10;
            }
            else cenaKm = 15;
        }
        else cenaKm = 18;
    }
    else cenaKm = 20;
    cena = vzdalenost * cenaKm;
    dan = cena * (100+dan)/100;
    sleva = cena * (100+procentoSlevy)/100;
    cena = cena + dan - sleva;

    printf("Cena je: %f", cena);

    return 0;
}
