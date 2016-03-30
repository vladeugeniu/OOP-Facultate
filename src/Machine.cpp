#include "Machine.h"
#include <iostream>
Machine::Machine(int engine_power_init, int max_speed_init, int armor_init, int atack_power_init, char* key_init):Interface(key_init)
{
    engine_power = engine_power_init;
    max_speed = max_speed_init;
    armor = armor_init;
    atack_power = atack_power_init;
}


