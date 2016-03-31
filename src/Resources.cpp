#include "Resources.h"
#include <iostream>
#include <cstdlib>

using namespace std;
Resources::Resources(char* file_path)
{
    f = fopen(file_path,"rb");
}

Resources::~Resources()
{
    fclose(f);
}
