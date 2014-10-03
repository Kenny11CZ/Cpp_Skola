#include <stdio.h>
int vetsi(int a, int b){
    if(a>b) return a;
    return b;
}
void ctverec(int velikost){
    for(int i = 0; i<velikost;i++){
        for(int j = 0; j<velikost;j++){
            printf(". ");
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    /* Max a ctverecek
    int x;
    int max = 1;
    printf("Nejaky pocitac neceho.\n");
    while(x>0){
        printf("Zadejte cislo: ");
        scanf("%d", &x);
        max = vetsi(x, max);
    }
    ctverec(max);
    printf("Nejvetsi cislo je: %d\n", max);
    */
    int x;
    bool suc;
    printf("Zadejte cislo: ");
    scanf("%d", &x);
    for(int i = 2; i<x; i++){
        if(x % i == 0) {
            printf("Neni(%d/%d=%d)", x, i, x/i);
            suc = false;
            break;
        }
        else suc = true;
    }
    if(suc){
        printf("Je to prvocislo");
    }
    return 0;
}
