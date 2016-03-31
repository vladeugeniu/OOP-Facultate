#include "Worker.h"
#include <iostream>
Worker::Worker(char* name_init, int hp_init, int energy_init, char* key_init):Interface(key_init)
{
    name = name_init;
    hp = hp_init;
    energy = energy_init;
    nr_workers++;
}

Worker::~Worker()
{
    delete name;
}
