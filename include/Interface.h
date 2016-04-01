#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>

class Interface
{
    protected:
        char im_key[20];
        char so_key[20];
    public:
        Interface();
        virtual ~Interface();
};

#endif // INTERFACE_H
