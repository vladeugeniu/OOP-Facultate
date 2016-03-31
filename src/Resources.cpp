#include "Resources.h"
#include <iostream>
using namespace std;
Resources::Resources(char* file_path)
{
    f.open(file_path, ifstream::in);
}

Resources::~Resources()
{
    f.close();
}
