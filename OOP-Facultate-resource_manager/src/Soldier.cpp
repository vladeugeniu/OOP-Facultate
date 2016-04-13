#include "Soldier.h"
#include "ResourceManager.h"
#include "Resources.h"
#include "Image.h"
#include "Sound.h"
using namespace std;
Soldier::Soldier(char* name_init, int hp_init, int energy_init, int atackPower_init):Worker(name_init, hp_init, energy_init)
{
    atackPower = atackPower_init;

}

void Soldier::print()
{
     Resources *p = ResourceManager::instance()->get_resource("soldier_im");

    Image *q;
    Sound *q1;
    q = dynamic_cast <Image*> (p);
    q->print();
    p = ResourceManager::instance()->get_resource("soldier_so");
    q1 = dynamic_cast <Sound*> (p);
    q1 -> print();
    cout<<endl<<name<<endl<<hp<<endl<<energy<<endl;
}
