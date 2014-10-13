#include <stdio.h>
#include <string.h>

int main()
{
    /*
    char retezec[100];
    char * p; //Pointer
    scanf("%s", retezec);
    p = retezec + strlen(retezec) - 3;
    printf("%s -> %s", retezec, p);
    printf("\n");
    printf("%d", strlen(retezec));
    printf("\n");
    printf("posledni 3 znaky: %s \n", p);
    */

    /*
    char retezec[100];
    char * p; //Pointer
    scanf("%s", retezec);
    for( int i = 0; i<strlen(retezec); i++){
        p = retezec + i;
        printf("%s -> %s\n", retezec, p);
    }
    */

    char retezec[100];
    char retezec2[100];
    scanf("%s", retezec);
    scanf("%s", retezec2);
    int x = strcmp(retezec, retezec2);
    if(x>0){
        printf("%s > %s\n",retezec, retezec2);
    }
    else if(x==0){
        printf("%s = %s\n",retezec, retezec2);
    }
    else{
        printf("%s < %s\n",retezec, retezec2);
    }
    return 0;
}
