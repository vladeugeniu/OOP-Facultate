#ifndef MACHINE_H
#define MACHINE_H

#include <Interface.h>
#include <iostream>

class Machine : public Interface
{
    protected:
        static int nr_machines;
        int engine_power;
        int max_speed;
        int armor;
        int atack_power;
    public:
        Machine(int engine_power_init=100, int max_speed_init=100, int armor_init=100, int atack_power_init=100, char* key_im="machine_im", char* key_so="machine_so");

};
#endif // MACHINE_H
