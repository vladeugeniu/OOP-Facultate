#include "Image.h"
#include <cstring>

#include <fstream>
Image::Image(char * file_path):Resources(file_path)
{}

char* Image::get_first_line()
{
    char *s = new char[1000];

    f.read(s,sizeof(char)*999);
   // strcat(s,"");
    return s;
}
void Image::print()
{
    cout<<"\nImage\n";
    cout<< get_first_line();

}
