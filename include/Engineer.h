#ifndef ENGINEER_H
#define ENGINEER_H

#include <Worker.h>
#include <iostream>
using namespace std;

class Engineer : public Worker
{
        static int nr_engineers;
        int intellect;
    public:
        Engineer(char* name_init="engi", int hp_init=100, int energy_init=100, int intellect_init=100);
        void print();


};

#endif // ENGINEER_H
