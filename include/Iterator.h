#ifndef ITERATOR_H
#define ITERATOR_H
#include <Node.h>


class Iterator     //folosita pentru a parcurge lista
{
private:
    Node*t;
public:

    Iterator(Node *p); //Initializeaza t-ul cu pointer-ul nodului de unde vrem sa incepem iteratia
    Iterator operator++(int i); //iteram la "la dreapta"
    operator bool(); // conversie de la interator la bool
    Iterator operator--(int i); //itereaza la stanga
    int GetCifra(); //returneaza cifra din nodul pe care am ajuns cu iteratorul
    void SetCifra(int);//modifica cifra
    Iterator(const Iterator& toCopy);//constructor de copiere
    Iterator operator=(const Iterator& toCopy);
    Iterator();//constructor ce intiializeaza cu NULL

};

#endif // ITERATOR_H
