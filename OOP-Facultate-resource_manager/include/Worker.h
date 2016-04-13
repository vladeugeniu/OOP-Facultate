#ifndef WORKER_H
#define WORKER_H

#include <Interface.h>
#include <iostream>

class Worker : public Interface
{

    protected:

         char name[100];
         int hp,energy;

    public:
        Worker(char* name_init="worker\0", int hp=100, int energy=100);
        virtual void print();

        virtual ~Worker();
};

#endif // WORKER_H
