#include <stdio.h>
#include <stdlib.h>
int NajdiMax(int pole[], int velikost)
{
    int max=0;
    for(int i=0;i<velikost;++i)
        if(pole[max]<pole[i])
            max = i;
    return max;
}
void SetridPole(int cisla[], int velikost){
    printf("Tridim pole...\n");
    for(int i=0;i<velikost-1;++i)
    {
        int max = NajdiMax(cisla+i, velikost-i);
        int tmp = cisla[max+i];
        cisla[max+i] = cisla[0+i];
        cisla[0+i] = tmp;
    }
}

int main()
{
    /*
    float a;
    int b, c, zaokrouhleno;
    printf("Zadejte desetinne cislo: ");
    scanf("%f", &a);
    b = (int)a;
    c = ((int)(a*10))%10;
    zaokrouhleno = b;
    if(c>=5)
        zaokrouhleno++;
    printf("Puvodni cislo: %f\n",a);
    printf("Float vypsan jako Int: %d\n",b);
    printf("Pretypovano na Int: %d\n",b);
    printf("Za desetinnou carkou: %d\n",b);
    printf("Zaokrouhleno: %d\n",zaokrouhleno);
    */
    int *p = (int*)malloc(sizeof(int)*3);
    for(int i = 0; i<3; i++){
        printf("Zadejte %d. cislo: ",i);
        scanf("%d", &p[i]);
    }
    SetridPole(p,3);
    for(int i = 0; i<3; i++){
        printf("%d\n",p[i]);
    }

    return 0;
}
