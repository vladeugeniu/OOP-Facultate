#include "Tank.h"
#include "ResourceManager.h"
#include "Resources.h"
#include "Image.h"
#include "Sound.h"
using namespace std;
Tank::Tank( int max_range_init, int engine_power_init, int max_speed_init, int armor_init, int atack_power_init):
            Machine(engine_power_init ,max_speed_init ,armor_init ,atack_power_init)
{
    max_range = max_range_init;

}
void Tank::print()
{
    Resources *p = ResourceManager::instance()->get_resource("tank_im");

    Image *q;
    Sound *q1;
    q = dynamic_cast <Image*> (p);
    q->print();
    p = ResourceManager::instance()->get_resource("tank_so");
    q1 = dynamic_cast <Sound*> (p);
    q1 -> print();
    cout<<endl<<"tank"<<endl<<engine_power<<endl<<max_speed<<endl<<atack_power<<endl<<armor<<endl<<max_range<<endl;
}

