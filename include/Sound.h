#ifndef SOUND_H
#define SOUND_H

#include <Resources.h>


class Sound : public Resources
{
    public:;
        Sound(char*);
        void print();
    private:
        char* get_first_line();
};
#endif // SOUND_H
