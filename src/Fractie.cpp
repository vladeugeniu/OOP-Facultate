#include "Fractie.h"
#include <Numar.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
Fractie::Fractie()
{
    Numar a("0"),b("1");
    numarator=a;
    numitor=b;
    semn=1;
}

Fractie::Fractie(char*s)
{
    char*s1;
    s1=strchr(s,'/');
     if(!s1){cout<<"Fractie invalida"; exit(1);}
    s1++;
    s[strlen(s)-strlen(s1)-1]=0;
    Numar a(s),b(s1),c("0");
    if(b==c){std::cout<<"Numitorul trebuie sa fie diferit de 0"; exit(0);}
    numarator=a;
    numitor=b;
    semn=a.GetSemn()*b.GetSemn();
}

Fractie::Fractie(const Fractie& other)
{
    numarator=other.numarator;
    numitor=other.numitor;
    semn=other.semn;
}
Fractie Fractie::operator=(const Fractie& other)
{
    numarator=other.numarator;
    numitor=other.numitor;
    semn=other.semn;
    return *this;
}

void Fractie::SetSemn(int a){semn=a;}

int Fractie::GetSemn(){return semn;}


Fractie Fractie::ireductibil()
{
    Fractie a;

    a=*this;

    a.numarator=this->numarator/this->numarator.cmmdc(this->numitor);
    a.numitor=this->numitor/this->numitor.cmmdc(this->numarator);

    return a;
}


Fractie Fractie::operator+(Fractie a)
{

    Fractie b=*this;

    //Numar div=numitor.cmmdc(a.numitor);
    b.numarator=b.numarator*a.numitor+a.numarator*b.numitor;

    b.numitor=b.numitor*a.numitor;

    b.SetSemn(b.numarator.GetSemn()*b.numitor.GetSemn());
    b.numarator.SetSemn(b.GetSemn());
    b.numitor.SetSemn(1);
    b=b.ireductibil();
    return b;
}

Fractie Fractie::operator*(Fractie a)

{
    Fractie b=*this;
    b=b.ireductibil();
    a=a.ireductibil();
    b.numitor=b.numitor*a.numitor;
    b.numarator=b.numarator*a.numarator;
    b.numarator.SetSemn(b.numarator.GetSemn()*b.numarator.GetSemn());
    b.numitor.SetSemn(1);
    b=b.ireductibil();
    return b;
}

void Fractie::afisare()
{
    numarator.afisare();
    std::cout<<'/';
    numitor.afisare();
}
