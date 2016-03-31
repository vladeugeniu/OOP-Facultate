#ifndef INTERFACE_H
#define INTERFACE_H
#include <iostream>

class Interface
{
    protected:
        char* im_key;
        char* so_key;
    public:
        Interface(char* key_im=NULL, char* key_so=NULL);
        virtual ~Interface();
};

#endif // INTERFACE_H
