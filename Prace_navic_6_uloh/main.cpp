#include <stdio.h>
#include <string.h>
#include <math.h>

float PrumerPole(float pole[], int velikost){
    printf("Prumer pole");
    float temp = 0;
    for(int i = 0; i<velikost;i++){
        temp += pole[i];
    }
    return temp/velikost;
}
void Automat(){
    int nabidka = 23;
    int vhozeno = 0;
    int mince;
    int navrat;

    printf("Naval %d korun!\n\n", nabidka);

    while (vhozeno < nabidka) {
        scanf("%d", &mince);
        if (mince == 1 || mince == 2 || mince == 5 || mince == 10 || mince == 20) {
            vhozeno = vhozeno + mince;
        } else printf("Falesny penize bys mi sem hazel, co?! Vhod znovu.\n");
        printf("Aktualni kredit: %d\n", vhozeno);
    }

    printf("\n");
    navrat = vhozeno - nabidka;
    printf("Vratim ti %d korun...\n", navrat);

    while (true) {
        if (navrat + nabidka - 20 >= nabidka) {
            navrat = navrat - 20;
            printf("Vracim 20...\n");
        } else if (navrat + nabidka - 10 >= nabidka) {
            navrat = navrat - 10;
            printf("Vracim 10...\n");
        } else if (navrat + nabidka - 5 >= nabidka) {
            navrat = navrat - 5;
            printf("Vracim 5...\n");
        } else if (navrat + nabidka - 2 >= nabidka) {
            navrat = navrat - 2;
            printf("Vracim 2...\n");
        } else if (navrat + nabidka - 1 >= nabidka) {
            navrat = navrat - 1;
            printf("Vracim 1...\n");
        }
        if (navrat <= 0) {
            break;
        }
    }

    printf("Dekujeme, ze cestujete s nasim automatem! Prijdte zas.\n");
}
void DivnyZnaky(){
    int aktualni = 0;
    int pocet = 7;
    for(int i = 0; i < pocet;i++){
        if(aktualni == 0){
            printf("?");
            aktualni++;
        }
        else if(aktualni == 1){
            printf("!");
            aktualni++;
        }
        else{
            printf("$");
            aktualni = 0;
        }
        printf("\n");
    }

}
void Vypocet(){
    char obrazec;
    float S,O,a,b,c,r,s;
    float pi = 3.14;
    printf("Zadejte znak operace:\n [C]tverec\n [K]ruh\n [T]rojuhelnik\n");
    scanf("%c", &obrazec);
    switch(obrazec){
        case 'C':
            printf("Zadejte stranu a: ");
            scanf("%f", &a);
            S=a*a;
            O=4*a;
            printf("Obsah je: %.2f\nObvod je: %.2f\n",S,O);
            break;
        case 'K':
            printf("Zadejte polomer r: ");
            scanf("%f", &r);
            S=pi*r*r;
            O=2*pi*r;
            printf("Obsah je: %.2f\nObvod je: %.2f\n",S,O);
            break;
        case 'T':
            printf("Zadejte stranu a: ");
            scanf("%f", &a);
            printf("Zadejte stranu b: ");
            scanf("%f", &b);
            printf("Zadejte stranu c: ");
            scanf("%f", &c);
            s=(a+b+c)/2;
            S=sqrt(s*(s-a)*(s-b)*(s-c));
            O=a+b+c;
            printf("Obsah je: %.2f\nObvod je: %.2f\n",S,O);
            break;
    }
}
void NejdelsiString(){
    char string[100];
    char nejdelsi[100];
    while(scanf("%s",s)!=EOF){
        if(strlen(string)>strlen(nejdelsi)) nejdelsi = string;
    }
}

int main(int argc, char *argv[])
{

    return 0;
}
