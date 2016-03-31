#include "Engineer.h"
#include "Image.h"
#include "ResourceManager.h"
#include "Sound.h"
#include "Resources.h"
Engineer::Engineer(char* name_init, int hp_init,int energy_init, int intellect_init):
    Worker(name_init, hp_init, energy_init, "engineer_im","engineer_so")
{
    intellect = intellect_init;
    nr_engineers++;
    nr_workers--;
}

void Engineer::print()
{
    Image *im;
    Sound *so;
    Resources *res;
    res = ResourceManager::instance()->get_resource(im_key);
    im = dynamic_cast <Image*>(res);
    res = ResourceManager::instance()->get_resource(so_key);
    so = dynamic_cast <Sound*>(res);
    cout<<name<<endl<<hp<<endl<<energy<<endl<<intellect<<endl;

}
