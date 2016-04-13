#include "Machine.h"
#include <iostream>
#include <cstring>
#include "ResourceManager.h"
#include "Resources.h"
#include "Image.h"
#include "Sound.h"
using namespace std;

Machine::Machine(int engine_power_init, int max_speed_init, int armor_init, int atack_power_init)
{
    engine_power = engine_power_init;
    max_speed = max_speed_init;
    armor = armor_init;
    atack_power = atack_power_init;

    strcpy(im_key,"machine_im");
    strcpy(so_key,"machine_so");
}
void Machine::print()
{
    Resources *p = ResourceManager::instance()->get_resource("machine_im");

    Image *q;
    Sound *q1;
    q = dynamic_cast <Image*> (p);
    q->print();
    p = ResourceManager::instance()->get_resource("machine_so");
    q1 = dynamic_cast <Sound*> (p);
    q1 -> print();
    cout<<endl<<"Machine"<<endl<<engine_power<<endl<<max_speed<<endl<<atack_power<<endl<<armor<<endl;
}

