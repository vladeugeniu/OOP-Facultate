#include <iostream>
#include "Engineer.h"
#include "Image.h"
#include "Sound.h"
#include "Machine.h"
#include "Tank.h"
#include "Submarine.h"
#include "Soldier.h"
#include "ResourceManager.h"
using namespace std;


int Machine::nr_machines = 0;
int Engineer::nr_engineers = 0;
int Worker::nr_workers = 0;
int Soldier::nr_soldiers = 0;
int Tank:: nr_tanks = 0;
int Submarine:: nr_submarines =0;


int main()
{
    Image im("poza_test2.png");

    ResourceManager::instance()->add_resource("key1",im);

    Resources *p = ResourceManager::instance()->get_resource("key1");

    Image *q;

    q = dynamic_cast <Image*> (p);
    q->print();


    return 0;
}
