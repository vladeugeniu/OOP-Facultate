#include "Interface.h"
#include <iostream>
#include <cstring>
Interface::Interface()
{

}

Interface::~Interface()
{
    delete im_key;
    delete so_key;
}
