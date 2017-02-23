#include "Node.h"
#include <iostream>

Node::Node()
{
    next=NULL;
    prev=NULL;
}
Node::Node(const Node* toCopy)
{

    cifra=toCopy->cifra;
    next=toCopy->next;
    prev=toCopy->prev;

}
Node Node::operator=(const Node* toCopy)
{


    cifra=toCopy->cifra;
    next=toCopy->next;
    prev=toCopy->prev;
    return *this;

}
Node::Node(int val)
{
    cifra=val;
    next=NULL;
    prev=NULL;
}
int Node::GetCifra()
{
        return cifra;
}
void Node::SetCifra(int info)
{
    cifra=info;
}
void Node::SetNext(Node*p)
{
    next=p;
}
void Node::SetPrev(Node*p)
{
    prev=p;
}
Node* Node::GetNext()
{
    return next;
}
Node* Node::GetPrev()
{
    return prev;
}

