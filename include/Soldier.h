#ifndef SOLDIER_H
#define SOLDIER_H

#include <Worker.h>


class Soldier : public Worker
{
         int atackPower;
    public:
        Soldier(char* name_init="Soli", int hp_init=100, int energy_init=100, int atackPower_init=100);

};

#endif // SOLDIER_H
