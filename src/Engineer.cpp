#include "Engineer.h"
#include "Image.h"
Engineer::Engineer(char* name_init, int hp_init,int energy_init, int intellect_init):
    Worker(name_init, hp_init, energy_init, "engineer")
{
    intellect = intellect_init;
    nr_engineers++;
    nr_workers--;
}

void Engineer::print()
{
    Image *p;
    Sound *q;



    cout<<name<<endl<<hp<<endl<<energy<<endl<<intellect<<endl;

}
