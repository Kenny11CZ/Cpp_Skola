#include <stdio.h>

void prvkyNaPoziciMocnin(){
    int pole[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    //int poleMocnin[] = {1,2,4,8,16,32,64};
    for(int i = 0; i<(sizeof(pole)/sizeof(int)); i=2*i){
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

int main()
{
    prvkyNaPoziciMocnin();
    return 0;
}
