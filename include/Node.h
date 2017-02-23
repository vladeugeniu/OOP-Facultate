#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int cifra;
    Node*next,*prev;
public:
    Node(int);//constructor, initializeaza nodul cu cifra din parametru
    int GetCifra();//returneaza cifra
    void SetCifra(int);//modifica cifra
    void SetNext(Node*);//modifica pointerul next
    void SetPrev(Node*);//modifica pointerul prev
    Node* GetNext();    //returneaza un pointer la adresa urmatorului nod
    Node* GetPrev();    //------------------------------- nodului anterior
    Node(const Node*);  //constructor de copieree... e putin mai special, nu e construcotul stnadard de copiere, el primeste un pointer catre adresa nodului de copiat
    Node();//construcotr fara initializare
    Node operator=(const Node*);//la fel ca la consturotrul de copiere
};

#endif // NODE_H
