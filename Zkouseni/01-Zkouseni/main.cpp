#include <stdio.h>

int main(int argc, char *argv[])
{
    float a,b,c,x;
    printf("Zadejte cisla do rovnice A*X+B=C\n");
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);
    printf("C: ");
    scanf("%f", &c);
    if(a==0){
        if(b==c){
            printf("\nNekonecne mnoho korenu.\n");
        }
        else printf("\nZadny koren.\n");
    }
    else{
        x=(c-b)/a;
        printf("\nVysledek je: %.2f\n", x);
    }
    return 0;
}
