#include "Sound.h"

#include <cstring>

Sound::Sound(char * file_path):Resources(file_path)
{}

char* Sound::get_first_line()
{
    char *s = new char[1000];
    fseek(f,0,0);
    fread(s,1,10,f);
    return s;
}
void Sound::print()
{
    cout<<"\Sound\n";
   // cout<<"MERGE";
    cout<< get_first_line();

}
