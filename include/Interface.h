#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>

class Interface
{
    protected:
        char* key;
    public:
        Interface(char* key_init=NULL);
        virtual ~Interface();
};

#endif // INTERFACE_H
