#include "Submarine.h"
#include "ResourceManager.h"
#include "Resources.h"
#include "Image.h"
#include "Sound.h"
using namespace std;
Submarine::Submarine( int max_depth_init, int time_limit_init, int engine_power_init, int max_speed_init, int armor_init,
                     int atack_power_init):Machine(engine_power_init, max_speed_init, armor_init, atack_power_init)
{
    max_depth = max_depth_init;
    time_limit = time_limit_init;
    nr_machines--;
    nr_submarines++;
}

void Submarine::print()
{
    Resources *p = ResourceManager::instance()->get_resource("submarine_im");

    Image *q;
    Sound *q1;
    q = dynamic_cast <Image*> (p);
    q->print();
    p = ResourceManager::instance()->get_resource("submarine_so");
    q1 = dynamic_cast <Sound*> (p);
    q1 -> print();
    cout<<endl<<"Submarine"<<endl<<engine_power<<endl<<max_speed<<endl<<atack_power<<endl<<armor<<endl<<max_depth<<endl<<time_limit;
}
