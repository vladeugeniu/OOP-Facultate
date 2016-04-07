#ifndef SOLDIER_H
#define SOLDIER_H

#include <Worker.h>


class Soldier : public Worker
{       static int nr_soldiers;
        int atackPower;
    public:
        Soldier(char* name_init="Soli", int hp_init=100, int energy_init=100, int atackPower_init=100);
        void print();
        static int soldier_nr(){return nr_soldiers;}
};

#endif // SOLDIER_H