#ifndef LISTA_H
#define LISTA_H
#include <Iterator.h>

class Lista
{
private:
    Node *cap,*fin; //lista dublu inlantuita, avem ambele capete
    Node* NodNou(int); //returneaza un nod initializat cu parametru caruia i s-a alocat memorie
public:


    void inserare(int); //insereaza un nod in lista
    Lista();//constructor initializeaza lista cu NULL
    Lista operator=(const Lista& toCopy);
    Lista(const Lista& toCopy);//constructor de copiere
    ~Lista();//destructor
    Iterator GetStart();
    Iterator GetFinal();
    void elimina();
};




#endif // LISTA_H
