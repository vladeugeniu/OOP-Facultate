#include "Submarine.h"

Submarine::Submarine( int max_depth_init, int time_limit_init, int engine_power_init, int max_speed_init, int armor_init,
                     int atack_power_init):Machine(engine_power_init, max_speed_init, armor_init, atack_power_init, "submarine")
{
    max_depth = max_depth_init;
    time_limit = time_limit_init;
}

