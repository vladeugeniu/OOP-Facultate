#include "Image.h"
#include <cstring>

Image::Image(char * file_path):Resources(file_path)
{}

char* Image::get_first_line()
{

    fread(s2,1,10,f);
    return s;
}
void Image::print()
{
    cout<<"\nImage\n";
    cout<< get_first_line() + 7;

}
/*
Image::Image(const Image& toCopy)
{
    strcpy(s2,toCopy.s2);
}
*/
