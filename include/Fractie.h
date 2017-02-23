#ifndef FRACTIE_H
#define FRACTIE_H
#include <Numar.h>s

class Fractie
{
    Numar numitor,numarator;
    int semn;
    public:
        Fractie();
        Fractie(char*s);
        Fractie(const Fractie& other);
        Fractie operator=(const Fractie& other);
        Fractie operator+(Fractie);
        Fractie operator*(Fractie);
        Fractie ireductibil();
        void SetSemn(int);
        int GetSemn();
        void afisare();
};

#endif // FRACTIE_H
