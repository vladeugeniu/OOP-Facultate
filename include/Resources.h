#ifndef RESOURCES_H
#define RESOURCES_H
#include <fstream>
#include <iostream>
using namespace std;
class Resources
{
    protected:
    ifstream f;

    public:
        Resources(char*);
        virtual ~Resources();
};

#endif // RESOURCES_H
