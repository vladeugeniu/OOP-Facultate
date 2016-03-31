#include "Soldier.h"

Soldier::Soldier(char* name_init, int hp_init, int energy_init, int atackPower_init):Worker(name_init, hp_init, energy_init, "solider")
{
    atackPower = atackPower_init;
    nr_soldiers++;
    nr_workers--;
}
