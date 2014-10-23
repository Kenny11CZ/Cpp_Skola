#include <stdio.h>

void prvkyNaPoziciMocnin(){
    int mocnina = 2;
    int pole[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    //int poleMocnin[] = {1,2,4,8,16,32,64};
    for(int i = 0; i<(sizeof(pole)/sizeof(int)); i*=mocnina){
        if(i == 0 || i == 1) i++;
        printf("%d\n", pole[i]);

    }
}
void prvkyNaPozicichNasobku(){
    int nasobek = 3;
    int pole[] = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0; i<(sizeof(pole)/sizeof(int));i+=nasobek){
        printf("%d\n", pole[i]);
    }
}

void mocneniPole(){
    int pole[100];
    int velikost = (sizeof(pole)/sizeof(int));
    for(int i = 0; i< velikost; i++){
        if(i%2==0) pole[i]= pole[i] * pole[i];
        else pole[i] = velikost - i;
    }
    for(int i = 0; i<velikost;i++){
        if(i%2==0) pole[i]= printf("%d <--Mocnina\n", pole[i]);
        else printf("%d <--velikost-pozice\n", pole[i]);

    }
}
void neco(){
    int pole[100];
    int velikost = (sizeof(pole)/sizeof(int));
    for(int i = 0; i<velikost+1;i++){
        pole[i] = i;
        printf("%d\n%d\n", i, velikost-i);
    }
}


int main()
{

    prvkyNaPoziciMocnin();
    printf("\n\n");
    prvkyNaPozicichNasobku();
    printf("\n\n");
    neco();
    //mocneniPole();
    return 0;
}
