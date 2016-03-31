#ifndef RESOURCES_H
#define RESOURCES_H
#include <fstream>
#include <iostream>
#include <stdlib.h>
using namespace std;
class Resources
{
    protected:
    FILE* f;

    public:
        Resources(char*);
        virtual ~Resources();
};

#endif // RESOURCES_H
