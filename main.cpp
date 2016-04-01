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
Engineer a;

    Image im("poza_test2.png");


    ResourceManager::instance()->add_resource("engineer_im",im);


    Resources *p = ResourceManager::instance()->get_resource("engineer_im");

    //ResourceManager::instance()->printManager();
   /* Image *q;

    q = dynamic_cast <Image*> (p);
    q->print();
    */

    //cout<<endl;
    a.print();


    return 0;
}
