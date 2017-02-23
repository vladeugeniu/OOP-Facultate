#include "Iterator.h"
#include <iostream>
#include <Node.h>

Iterator::Iterator()
{
    t=NULL;
}

Iterator::Iterator(const Iterator& toCopy)
{
    t=toCopy.t;
}

Iterator Iterator::operator=(const Iterator& toCopy)
{
    t=toCopy.t;
    return *this;
}

Iterator::Iterator(Node *l)
{
     t=l;

}

Iterator Iterator::operator++(int i)
{
    t=t->GetNext();

    return *this;
}

Iterator::operator bool()
{
    if(t==NULL) return false;
    else return true;
}

Iterator Iterator::operator--(int i)
{
    t=t->GetPrev();
    return *this;
}

void Iterator::SetCifra(int info)
{
    t->SetCifra(info);
}

int Iterator::GetCifra()
{
    return t->GetCifra();
}
