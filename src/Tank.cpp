#include "Tank.h"

Tank::Tank( int max_range_init, int engine_power_init, int max_speed_init, int armor_init, int atack_power_init):
            Machine(engine_power_init ,max_speed_init ,armor_init ,atack_power_init ,"tank")
{
    max_range = max_range_init;
}

