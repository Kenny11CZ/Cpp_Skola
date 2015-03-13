#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
public:
    Counter();
    int pocet;
    void Navis(int x = 1);
    void Sniz(int x = 1);
    void Vypis();
    void Resetovat();
};

#endif // COUNTER_H
