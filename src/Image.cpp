#include "Image.h"
#include <cstring>

Image::Image(char * file_path):Resources(file_path)
{}

char* Image::get_first_line()
{
    char *s = new char[1000];

    fread(s,1,10,f);
    return s;
}
void Image::print()
{
    cout<<"\nImage\n";
    cout<< get_first_line() + 7;

}
