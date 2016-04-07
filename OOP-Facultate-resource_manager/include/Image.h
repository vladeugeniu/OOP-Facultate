#ifndef IMAGE_H
#define IMAGE_H

#include <Resources.h>


class Image : public Resources
{
    public:
        Image(){};
        Image(char*);
       // Image(const Image&);
        void print();
    private:
        char* get_first_line();
        char s2[100];

};

#endif // IMAGE_H
