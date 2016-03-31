#ifndef WORKER_H
#define WORKER_H

#include <Interface.h>
#include <iostream>

class Worker : public Interface
{

    protected:
         static int nr_workers;
         char *name;
         int hp,energy;

    public:
        Worker(char*name="worker", int hp=100, int energy=100, char* key_im="worker_im", char* key_so="worker_so");
        virtual ~Worker();

};

#endif // WORKER_H
