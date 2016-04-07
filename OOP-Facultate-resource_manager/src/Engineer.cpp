#include "Engineer.h"
#include "Image.h"
#include "ResourceManager.h"
#include "Sound.h"
#include "Resources.h"
#include "cstring"
Engineer::Engineer(char* name_init, int hp_init,int energy_init, int intellect_init):
    Worker(name_init, hp_init, energy_init)
{
    intellect = intellect_init;
    nr_engineers++;
    nr_workers--;
    strcpy(im_key,"engineer_im");
    strcpy(so_key,"engineer_so");
}

void Engineer::print()
{


     Resources *p = ResourceManager::instance()->get_resource("engineer_im");

    Image *q;
    Sound *q1;
    q = dynamic_cast <Image*> (p);
    q->print();
    cout <<endl;
    p = ResourceManager::instance()->get_resource("engineer_so");
    q1 = dynamic_cast <Sound*> (p);
    q1 -> print();
    cout<<endl<<name<<endl<<hp<<endl<<energy<<endl<<intellect<<endl;
}
