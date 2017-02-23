#include <iostream>
#include <Fractie.h>
using namespace std;

int main()
{
   char s[100],s2[100];
    cout<<"Introduceti prima fractie: ";
    cin.get(s,100);
    cin.get();
    //cout<<"\nIntroduceti numitorul primei fractii: ";
    //cin.get(s2,100);
    //cin.get();
    Fractie a(s);
    cout<<"\nIntroduceti a doua fractie: ";
    cin.get(s,100);
    cin.get();
    //cout<<"\nIntroduceti numitorul celei de-a doua fractii: ";
    //cin.get(s2,100);
    //cin.get();
    Fractie b(s);
    int k=1;
    cout<<endl<<endl;
    while(k)
    {
    a.afisare();cout<<endl<<endl;
    b.afisare();cout<<endl<<endl;
    cout<<"\nPentru a aduna cele doua fractii, apasati tasta 1 ";
    cout<<"\nPentru a inmulti cele doua fractii, apasati tasta 2 ";
    cout<<"\nPentur a transforma prima fractie intr-o fractie ireductibila, apasati tasta 3 ";
    cout<<"\nPentru a transforma a doua fractie intr-o fractie ireductibila, apasati tasta 4 ";
    cout<<"\nPentru a inchide programul, apasati tasta 0 ";
    cin>>k;
    cout<<endl<<endl<<endl;
    switch(k)
    {
    case 1:
        (a+b).afisare(); cout<<endl<<endl; break;
    case 2:
        (a*b).afisare(); cout<<endl<<endl; break;
    case 3:
        (a.ireductibil()).afisare(); cout<<endl<<endl; break;
    case 4:
        (b.ireductibil()).afisare(); cout<<endl<<endl; break;
    default:break;

    }
    }
    return 0;
}

