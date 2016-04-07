#ifndef SUBMARINE_H
#define SUBMARINE_H

#include <Machine.h>


class Submarine : public Machine
{
        static int nr_submarines;
        int max_depth;
        int time_limit;
    public:
        Submarine( int max_depth_init=1000, int time_limit_init=10, int engine_power_init=100, int max_speed_init=30, int armor_init=100,
                     int atack_power_init=100);
        void print();
        static int submarine_nr(){return nr_submarines;}
};

#endif // SUBMARINE_H
