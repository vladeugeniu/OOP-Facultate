#include "Numar.h"
#include <string.h>
#include <Lista.h>
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;
Numar::Numar(char *s)
{
    int i;
    int m;
    if(s[0]!='-'){m=0;//setam m-ul in functie de semnul numarului. daca incepe cu - il deplasam la dreapta, daca nu il lasam pe pozitia initiala
                  semn=1;
                  }
        else {m=1;
              semn=-1;}

    while(s[m]=='0')m++; //ignoram toate zerourile de la inceputul sirului
    for(i=strlen(s)-1;i>=m;i--)
    {  if(isdigit(s[i]))nr.inserare(s[i]-'0');
        else {cout<<"Numarul introdus contine caractere, va rugam rulati programul iar";
                exit(0);}

    }
        n=strlen(s)-m;
        if(n==0)nr.inserare(0);
}
void Numar::afisare()
{
      Iterator a;
      a=nr.GetFinal();
      if(semn==-1)
        std::cout<<'-';
        //while(a&&a.GetCifra()==0)a--;
        //if(!a)std::cout<<0;
         while(a){
          std::cout<<a.GetCifra();
          a--;
      }

}
void Numar::SetSemn(int info)
{
    semn=info;
}
Numar::Numar(){semn=1;}

Numar::Numar(const Numar& toCopy)
{
  semn=toCopy.semn;
  n=toCopy.n;
  nr=toCopy.nr;
}
Numar Numar::operator=(const Numar& toCopy)
{
  semn=toCopy.semn;
  n=toCopy.n;
  nr=toCopy.nr;
  return *this;
}

int Numar::compararem(Numar toCompare)
{
    if(n>toCompare.n) return 1;
    if(n<toCompare.n) return 2;

    Iterator a,b;
    a=nr.GetFinal();
    b=toCompare.nr.GetFinal();

    while(a&&b)
    {
        if(a.GetCifra()>b.GetCifra())return 1;
        if(a.GetCifra()<b.GetCifra())return 2;
        a--;b--;
    }
    return 0;
}

Numar Numar::adunarem(Numar toAdd)
{
    Numar suma;
    Iterator a,b;
    a=nr.GetStart();
    b=toAdd.nr.GetStart();
    int s=0;
    while(a&&b)
    {
        s+=a.GetCifra()+b.GetCifra();
        if(s>9)
        {
            suma.nr.inserare(s%10);
            s=1;
        }
        else
        {
            suma.nr.inserare(s);
            s=0;
        }
        a++;b++;
    }

   varsa(suma,a,s);
   varsa(suma,b,s);
    if(s)suma.nr.inserare(s);
    return suma;

}

int Numar::GetSemn()
{
    return semn;
}

void Numar::varsa(Numar &suma, Iterator &b,int &s)
{
    while(b)
    {   s+=b.GetCifra();
        if(s>9)
        {
            suma.nr.inserare(s%10);
            s=1;
        }
        else
        {
            suma.nr.inserare(s);
            s=0;
        }
        b++;
    }
}

Numar Numar::scaderem(Numar deScazut)
{
    if(this->compararem(deScazut)==0)
    {
        Numar dif;
        dif.nr.inserare(0);
        return dif;
    }
    if(this->compararem(deScazut)==2)
    {
        Numar dif;
        dif=deScazut.scaderem(*this);
        dif.SetSemn(-1);
        return dif;
    }
    Numar dif;
    Iterator a,b,c;
    a=nr.GetStart();
    b=deScazut.nr.GetStart();
    c=a;

    while(a&&b)
    {
        if(b.GetCifra()>a.GetCifra())
        {
            dif.nr.inserare(10+a.GetCifra()-b.GetCifra());
            c=a++;b++;



            while(c.GetCifra()==0)
            {
                c.SetCifra(9);
                c++;

            }
            c.SetCifra(c.GetCifra()-1);
            }


         else {dif.nr.inserare(a.GetCifra()-b.GetCifra());
        a++;
        b++;}

    }
    int s=0;
    varsa(dif,a,s);
    varsa(dif,b,s);
        a=dif.nr.GetFinal();
        while(a.GetCifra()==0&&a)
        {
            a--;
            dif.nr.elimina();
        }
    if(!a)dif.nr.inserare(0);
    return dif;
    }

Numar Numar::operator+(Numar a)
{
    if(semn==1&&a.GetSemn()==1)
        {Numar r;
         r=a.adunarem(*this);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.n=j;
         return r;
        }
    if(semn==1&&a.GetSemn()==-1)
     {Numar r;
         r=this->scaderem(a);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.n=j;
         return r;
        }

    if(semn==-1&&a.GetSemn()==1)
    {Numar r;
         r=a.scaderem(*this);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.n=j;
         return r;
        }
    if(semn==-1&&a.GetSemn()==-1)
         {Numar r;
         r=a.adunarem(*this);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.semn=-1;
         r.n=j;
         return r;
        }
}

Numar Numar::operator-(Numar a)
{
    if(semn==1&&a.GetSemn()==1)
      {Numar r;
         r=this->scaderem(a);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.n=j;
         return r;
        }
    if(semn==1&&a.GetSemn()==-1)
    {Numar r;
         r=this->adunarem(a);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.n=j;
         return r;
        }
    if(semn==-1&&a.GetSemn()==-1)
        {Numar r;
         r=a.scaderem(*this);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.n=j;
         return r;
        }
    if(semn==-1&&a.GetSemn()==1)
         {Numar r;
         r=a.adunarem(*this);
         Iterator i;
         i=r.nr.GetStart();
         int j=0;
         while(i)
         {
             i++;j++;
         }
         r.n=j;
         r.SetSemn(-1);
         return r;
        }

}

bool Numar::operator>(Numar a)
{
    if(this->compararem(a)==1) return true;

    return false;

}

bool Numar::operator<(Numar a)
{
    if(this->compararem(a)==2) return true;
    return false;
}

bool Numar::operator==(Numar a)
{
    if(this->compararem(a)==0) return true;
    return false;
}

bool Numar::operator!=(Numar a)
{
    if(this->compararem(a)!=0) return true;
    return false;
}


Numar Numar::cmmdc(Numar a)
{
    Numar b,c;
    b=*this;
    c=a;
    b.semn=1;
    c.semn=1;

    while(b!=c)
        {
    if(b<c)c=c-b;
    else b=b-c;

        }
    return c;

}


Numar Numar::operator*(Numar m)
{
    Iterator a,b,q;
    a=nr.GetStart();
    b=m.nr.GetStart();
    int k=0;
    Numar c;
    int h=this->GetSemn()*m.GetSemn();
    while(a)
    {
        Numar p;
        b=m.nr.GetStart();
        for(int i=0;i<k;i++)p.nr.inserare(0);
        int s=0;
        while(b)
        {
           s+=a.GetCifra()*b.GetCifra();
           p.nr.inserare(s%10);
           s=s/10;
           b++;
        }
        while(s){p.nr.inserare(s%10);s/=10;}
        c=c+p;
        a++;k++;
    }
    q=c.nr.GetFinal();
    while(q.GetCifra()==0){c.nr.elimina();q--;}
    c.SetSemn(h);
    return c;
}

Numar Numar::operator/(Numar a)
{
   Numar k("1");
    int s1=GetSemn();
    int s2=a.GetSemn();
    SetSemn(1);
    a.SetSemn(1);
     Numar c=*this;
    while(c>a){c=c-a;
                k++;}
    a.SetSemn(s2);
    SetSemn(s1);
    k.SetSemn(s1*s2);
    return k;
}

Numar Numar::operator++(int a)
{
    Numar i("1");
    *this=*this+i;
    return *this;
}

Numar Numar::operator--(int a)
{
    Numar i("1");
    *this=*this-i;
    return *this;
}









