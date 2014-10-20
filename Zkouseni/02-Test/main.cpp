#include <stdio.h>
void Pismeno(){
    char pismeno;
    printf("Zadejte pismeno: ");
    scanf("%c", &pismeno);
    printf("Zadali jste pismeno %c a jeho hodnota je %d\n", pismeno, pismeno);
}
void Kalkulacka(){
    printf("Vitejte v me kalkulacce >.<\n");
    float a,b,vysledek;
    char operace;
    printf("Zadejte operaci ve tvaru a+b\n");
    scanf("%f%c%f", &a, &operace, &b);
    switch(operace){
        case '+':
            vysledek = a+b;
            printf("Vysledek je: %.2f\n", vysledek);
            break;
        case '-':
            vysledek = a-b;
            printf("Vysledek je: %.2f\n", vysledek);
            break;
        case '*':
            vysledek = a*b;
            printf("Vysledek je: %.2f\n", vysledek);
            break;
        case '/':
            if(b!=0) {
                vysledek = a/b;
                printf("Vysledek je: %.2f\n", vysledek);
            }
            else printf("B se nesmi rovnat nule\n");
            break;
        default:
            printf("Zadali jste spatnou operaci\n");
    }
}
void Licha(){
    int pole[] = {1,2,3,4,5,6,7,8,9,15};

    printf("Vypis vsech lichych pozic z pole\n");
    printf("Velikost pole: %d\n\n", (sizeof(pole)/sizeof(int)));
    for(int i = 0; i<(sizeof(pole)/sizeof(int)); i++){
        if(i%2==1) printf("Pozice %d cislo %d\n", i, pole[i]);
    }
}


int main()
{
    //Pismeno();
    //Kalkulacka();
    //Licha();
    return 0;
}
