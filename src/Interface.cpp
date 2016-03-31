#include "Interface.h"
#include <iostream>
#include <cstring>
Interface::Interface(char* key_im, char* key_so)
{
    im_key = new char[strlen(key_im)];
    strcpy(im_key, key_im);
    so_key = new char[strlen(key_so)];
    strcpy(so_key, key_so);

}

Interface::~Interface()
{
    delete im_key;
    delete so_key;
}
