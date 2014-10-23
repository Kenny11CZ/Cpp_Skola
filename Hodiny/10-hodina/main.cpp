#include <stdio.h>
#include <string.h>
#include <math.h>

float PrumerPole(int pole[], int velikost){
    float result = 0;
    for(int i = 0; i<velikost; i++){
        result += pole[i];
    }
    result = result/velikost;
    return result;
}
void VypsatZnaky(int pocet){
    int temp = 0;
    char znaky[3] = {'!', '?', '*'};
    for(int i = 0; i<pocet;i++){
        if(temp==0){
            printf("%c\n", znaky[0]);
            temp++;
        }
        else if(temp==1){
            printf("%c\n", znaky[1]);
            temp++;
        }
        else if(temp==2){
            printf("%c\n", znaky[2]);
            temp = 0;
        }
    }
}
void Automat(){
    int cena = 23;
    int vhozeno = 0;
    int mince[6] = {1,2,5,10,20,50};
    while(vhozeno<cena){
        int temp = 0;
        printf("Vhodte mince...\n");
        scanf("%d", &temp);
        if(temp == mince[0] || temp == mince[1] || temp == mince[2] || temp == mince[3] || temp == mince[4] || temp == mince[5]){
            vhozeno += temp;
            continue;
        }
        printf("Spatna mince!\n");
    }
    printf("Vhodili jste: %d\n", vhozeno);
    int vratit = vhozeno - cena;
    while(vratit!=0){
        if(vratit>=mince[5] && vratit-mince[5]>=0){
            printf("Vracim %dKc\n", mince[5]);
            vratit -= mince[5];
        }
        if(vratit>=mince[4] && vratit-mince[4]>=0){
            printf("Vracim %dKc\n", mince[4]);
            vratit -= mince[4];
        }
        if(vratit>=mince[3] && vratit-mince[3]>=0){
            printf("Vracim %dKc\n", mince[3]);
            vratit -= mince[3];
        }
        if(vratit>=mince[2] && vratit-mince[2]>=0){
            printf("Vracim %dKc\n", mince[2]);
            vratit -= mince[2];
        }
        if(vratit>=mince[1] && vratit-mince[1]>=0){
            printf("Vracim %dKc\n", mince[1]);
            vratit -= mince[1];
        }
        if(vratit>=mince[0] && vratit-mince[0]>=0){
            printf("Vracim %dKc\n", mince[0]);
            vratit -= mince[0];
        }
    }
    printf("Vraceno celkem: %d", vratit);
}
void NejdelsiString(){
    char string[100];
    char nejdelsi[100] = "";
    while(scanf("%s", string)!= EOF){
        if(strlen(string)>strlen(nejdelsi)){
            strcpy(nejdelsi, string);
        }
        printf("Nejdelsi je: %s\n", nejdelsi);
    }
}
void Obrazky(){
    int tvar;
    printf("Zadejte cislo obrazce.\n 1.Ctverec\n 2.Obdelnik\n 3.Kruh\n 4.Trojuhelnik\n");
    scanf("%d", &tvar);
    float a,b,c;
    switch(tvar){
        case 1:
        {
            printf("Zadejte stranu A: ");
            scanf("%f", &a);
            printf("Obvod je: %.2f\n", 4*a);
            printf("Obsah je: %.2f\n", a*a);
            break;
        }
        case 2:
        {
            printf("Zadejte stranu A: ");
            scanf("%f", &a);
            printf("Zadejte stranu B: ");
            scanf("%f", &b);
            printf("Obvod je: %.2f\n", (a+b)*2);
            printf("Obsah je: %.2f\n", a*b);
            break;
        }
        case 3:
        {
            float r;
            float pi = 3.14;
            printf("Zadejte polomer: ");
            scanf("%f", &r);
            printf("Obvod je: %.2f\n", 2*pi*r);
            printf("Obsah je: %.2f\n", pi*r*r);
            break;
        }
        case 4:
        {
            float s;
            printf("Zadejte stranu A: ");
            scanf("%f", &a);
            printf("Zadejte stranu B: ");
            scanf("%f", &b);
            printf("Zadejte stranu C: ");
            scanf("%f", &c);
            printf("Obvod je: %.2f\n", a+b+c);
            s = (a+b+c)/2;
            printf("Obsah je: %.2f\n", sqrt(s*(s-a)*(s-b)*(s-c)));
            break;
        }
        default:
        {
            printf("Spatna volba.");
            break;
        }
    }
}
void LinRovnice(){
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
}


int main(int argc, char *argv[])
{
    return 0;
}
