#include "Image.h"
#include <cstring>

Image::Image(char * file_path):Resources(file_path)
{}

char* Image::get_first_line()
{
    fseek(f,0,0);
    fread(s2,2,10,f);
    return s2;
}
void Image::print()
{
    cout<<"\nImage\n";
    cout<< get_first_line() + 7;
}

