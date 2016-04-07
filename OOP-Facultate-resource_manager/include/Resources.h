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
    char s[100];

    public:
        Resources(){};
        Resources(char*);
       // Resources(const Resources&);
        //Resources operator=(const Resources&);
        virtual ~Resources();
        virtual void print(){cout<<"BINE";}
};

#endif // RESOURCES_H
