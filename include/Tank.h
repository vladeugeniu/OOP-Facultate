#ifndef TANK_H
#define TANK_H

#include <Machine.h>


class Tank : public Machine
{
        static int nr_tanks;
        int max_range;

    public:
        Tank( int max_range_init=100, int engine_power_init=100, int max_speed_init=60, int armor_init=100, int atack_power_init=100);
        void print();
};

#endif // TANK_H
