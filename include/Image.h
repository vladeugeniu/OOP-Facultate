#ifndef IMAGE_H
#define IMAGE_H

#include <Resources.h>


class Image : public Resources
{
    public:
        Image(char*);
        void print();
    private:
        char* get_first_line();
};

#endif // IMAGE_H
