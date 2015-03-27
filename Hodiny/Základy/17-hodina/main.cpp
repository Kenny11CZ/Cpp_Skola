#include <stdio.h>
void VedlejsiDiagonala(){
    int pole[6][6] = {1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6,1,2,3,4,5,6};
    int velikost = 6;
    int max = 0;
    printf("Pole{\n");
    for(int i = 0; i<velikost; i++){
        for(int k = 0; k<velikost; k++){
            printf("%d ", pole[i][k]);
        }
        printf("\n");
    }
    printf("}\n\n");
    for(int i = 0; i<velikost; i++){
        printf("%d ", pole[i][velikost-i-1]);
        if(pole[i][velikost-i-1]>max)
            max = pole[i][velikost-i-1];
        printf("\n");
    }
    printf("Nejvetsi je %d\n", max);
}
void VypisPole(int pole[], int velikost){
    for(int i = 0; i<velikost; i++){
        printf("%d ", pole[i]);
    }
    printf("\n");
}
void BubbleSort(int pole[], int velikost){
    VypisPole(pole, velikost);
    for(int i=0;i<velikost-1;++i)
    {
        for(int j=0;j<velikost-1-i;++j)
        {
            printf("%d-%d ",pole[j], pole[j+1]);
            if(pole[j+1]>pole[j])
            {
                //prohodit, pokud je j+1 vetsi nez j
                printf("Nalezena nerovnost! ");
                //kód prohazování
                int tmp = pole[j];
                pole[j] = pole[j+1];
                pole[j+1] = tmp;
            }
            VypisPole(pole, velikost);


        }
        printf("\n");
    }
}
void ObracenyBubbleSort(int pole[], int velikost){
    VypisPole(pole, velikost);
    for(int i=0;i<velikost-1;++i)
    {
        for(int j=0;j<velikost-1-i;++j)
        {
            printf("%d-%d ",pole[j], pole[j+1]);
            if(pole[j+1]<pole[j])
            {
                //prohodit, pokud je j+1 vetsi nez j
                printf("Nalezena nerovnost! ");
                //kód prohazování
                int tmp = pole[j];
                pole[j] = pole[j+1];
                pole[j+1] = tmp;
            }
            VypisPole(pole, velikost);


        }
        printf("\n");
    }
}


int main()
{
    //VedlejsiDiagonala();
    int pole[5] = {1,2,3,8,4};
    int velikost = 5;
    BubbleSort(pole,velikost);
    printf("------------------\n");
    VypisPole(pole, velikost);
    ObracenyBubbleSort(pole,velikost);
    printf("------------------\n");
    VypisPole(pole, velikost);

    return 0;
}
