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


   //Image im("poza_test2.png");

    //ResourceManager::instance()->add_resource("engineer_im",im);


    Resources *p = ResourceManager::instance()->get_resource("engineer_im");

    Image *q;

    q = dynamic_cast <Image*> (p);
    q->print();
    cout<<name<<endl<<hp<<endl<<energy<<endl<<intellect;
    q->print();
    //im->print();
    //so->print();

//ResourceManager::instance()->printManager();

}
