#include "Lista.h"
#include <iostream>
#include <Iterator.h>
Lista::Lista()
{
    cap=NULL;
    fin=NULL;
}

Node* Lista::NodNou(int info)
{
    Node *temp=new Node(info);
    return temp;
}

void Lista::inserare(int info)
{
    if(!cap){ cap=NodNou(info);
              fin=cap;
            }

        else
            {
                Node *temp=NodNou(info);
                fin->SetNext(temp);
                temp->SetPrev(fin);
                fin=temp;

            }

}

Lista::Lista(const Lista& toCopy)
{

    Node* temp=toCopy.cap;
    cap=NULL;
    while(temp){

        inserare(temp->GetCifra());
        temp=temp->GetNext();
    }
}

Lista Lista::operator=(const Lista& toCopy)
{


    Node* temp=toCopy.cap;
    cap=NULL;
    while(temp){

        inserare(temp->GetCifra());
        temp=temp->GetNext();
    }
    return *this;
}

Lista::~Lista()
{
   Node*temp=cap;

    while(temp)
    {
        temp=cap->GetNext();
        delete cap;
        cap=temp;
    }

}

Iterator Lista::GetStart()
{
    Iterator a(cap);
    return a;
}

Iterator Lista::GetFinal()
{
    Iterator a(fin);
    return a;
}

void Lista::elimina()
{
    Node *temp=fin;
    fin=fin->GetPrev();
    fin->SetNext(NULL);
    delete temp;
}
