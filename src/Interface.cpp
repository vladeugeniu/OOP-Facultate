#include "Interface.h"
#include <iostream>
#include <cstring>
Interface::Interface(char* key_init)
{
    key = new char[strlen(key_init)];
    strcpy(key, key_init);
}

Interface::~Interface()
{
    delete key;
}
