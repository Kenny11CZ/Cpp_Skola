#ifndef LOD_H
#define LOD_H

class Lod
{
public:
    Lod(char const jmeno[], int posadka, int vztlak, char const typ[]);
    void Vypis();
    int Naklady(int mesice);
    char jmeno[30];
    int posadka;
    int vztlak;
    char typ[30];
};

class LetadlovaLod : public Lod
{
public:
    LetadlovaLod(char const jmeno[], int posadka, int vztlak, int letadel);
    void Vypis();
    int Naklady(int mesice);
    int letadel;
};

#endif // LOD_H
