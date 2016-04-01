#include "Resources.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
Resources::Resources(char* file_path)
{
    strcpy(s,file_path);
    f = fopen(s,"rb");
}

Resources::~Resources()
{
    fclose(f);
}
/*Resources::Resources(const Resources& toCopy)
{
    f = toCopy.f;
    strcpy(s,toCopy.s);
}

Resources Resources::operator=(const Resources& toCopy)
{
    f = toCopy.f;
    strcpy(s,toCopy.s);
    return *this;
}
*/
