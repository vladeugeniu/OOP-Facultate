#include "Worker.h"
#include <iostream>
#include <cstring>
Worker::Worker(char* name_init, int hp_init, int energy_init)
{
    name = name_init;
    hp = hp_init;
    energy = energy_init;
    nr_workers++;
    strcpy(im_key,"worker_im");
    strcpy(so_key,"worker_so");
}

Worker::~Worker()
{

    delete name;
}
//void Worker::print(){}
