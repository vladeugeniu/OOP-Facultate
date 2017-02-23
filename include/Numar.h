#ifndef NUMAR_H
#define NUMAR_H
#include <Lista.h>
class Numar
{
private:
    int semn,n; //semn 1 pt + -1 pt -; n- nr de cifre
    Lista nr; // obiectul de tip lista in care se retin cifrele
    void varsa(Numar&,Iterator&,int&);

    Numar scaderem(Numar);
    Numar adunarem(Numar);
public:

    int compararem(Numar);
    Numar(char*); //initializeaza obiectului construid lista pe baza sirului primit ca parametru
    Numar();//nr- lista vida, semn==0;
    void afisare();
    Numar(const Numar&); //constructor de copiere pentru a putea returna
    Numar operator=(const Numar&); //atribuiri
    void SetSemn(int);
    int GetSemn();
    Numar operator+(Numar);
    Numar operator-(Numar);
    bool operator>(Numar);
    bool operator<(Numar);
    bool operator==(Numar);
    bool operator!=(Numar);
    Numar cmmdc(Numar);
    Numar operator*(Numar);
    Numar operator/(Numar);
    Numar operator++(int);
    Numar operator--(int);
};

#endif // NUMAR_H
