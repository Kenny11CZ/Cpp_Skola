#include "clovek.h"
#include <stdio.h>
#include <string.h>

Clovek::Clovek()
{
    int x;
    printf("Zadejte jmeno: ");
    scanf("%s", this->jmeno);
    printf("Zadejte prijmeni: ");
    scanf(" %s", this->prijmeni);
    printf("Zadejte zivost: ");
    scanf("%d", &this->zivy);
    printf("Zadejte zadanost: ");
    scanf("%d", &this->svobodny);
    printf("Ma %s mazlicka? ", this->jmeno);
    scanf("%d", &x);
    if(x==1){
        int vek;
        float spotreba;
        char jmeno[100];
        char typ[100];
        printf("Zadejte jmeno: ");
        scanf("%s", jmeno);
        printf("Zadejte typ: ");
        scanf("%s", typ);
        printf("Zadejte vek: ");
        scanf("%d", &vek);
        printf("Zadejte spotrebu: ");
        scanf("%f", &spotreba);
        this->jedna = new Mazlicek(typ, jmeno, vek, spotreba);
    }
}

void Clovek::JeZivy()
{
    if(this->zivy) printf("Je zivy!\n");
    else printf("Je mrtev!\n");
}

void Clovek::JeSvobodny()
{
    if(!this->svobodny) printf("Je svobodny!\n");
    else printf("Je zadany!\n");
}

void Clovek::ZmenZivot()
{
    if(this->zivy) zivy = 0;
    else zivy = 1;
}

void Clovek::Vypis()
{
    printf("--------------------------\n");
    printf("%s %s (%d)\n", this->jmeno, this->prijmeni, this->vek);
    this->JeSvobodny();
    this->JeZivy();
    printf("-----");
    if(this->jedna != NULL) this->jedna->Vypis();
    printf("--------------------------\n");
}

void Clovek::NastavVek(int vek)
{
    this->vek = vek;
}

void Clovek::NastavPrijmeni(const char prijmeni[])
{
    strcpy(this->prijmeni, prijmeni);
}

void Clovek::NastavJmeno(const char jmeno[])
{
    strcpy(this->jmeno, jmeno);
}



Mazlicek::Mazlicek(const char typ[], const char jmeno[], int vek, float spotreba)
{
    this->NastavJmeno(jmeno);
    this->NastavTyp(typ);
    this->NastavVek(vek);
    this->NastavSpotrebu(spotreba);
}


void Mazlicek::Vypis()
{
    printf("%s/%s (%.2f/tyden)\n", this->jmeno, this->typ, this->spotreba);
}

void Mazlicek::NastavVek(int vek)
{
    this->vek = vek;
}

void Mazlicek::NastavTyp(const char typ[])
{
    strcpy(this->typ, typ);
}

void Mazlicek::NastavJmeno(const char jmeno[])
{
    strcpy(this->jmeno, jmeno);
}

void Mazlicek::NastavSpotrebu(float spotreba)
{
    this->spotreba = spotreba;
}

void Mazlicek::Spotrebovano(int dni)
{
    printf("Behem %d dni spotrebuje %.2f krmeni\n",dni , (this->spotreba/7)*dni);
}


Pes::Pes(const char jmeno[],const int vek) : Mazlicek("Pes", jmeno, vek, 200)
{
}
