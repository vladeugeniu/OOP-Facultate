#ifndef SUBMARINE_H
#define SUBMARINE_H

#include <Machine.h>


class Submarine : public Machine
{
        int max_depth;
        int time_limit;
    public:
        Submarine( int max_depth_init=1000, int time_limit_init=10, int engine_power_init=100, int max_speed_init=30, int armor_init=100,
                     int atack_power_init=100);

};

#endif // SUBMARINE_H
