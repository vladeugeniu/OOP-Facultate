#include "Worker.h"
#include <iostream>
#include <cstring>
#include "ResourceManager.h"
#include "Resources.h"
#include "Image.h"
#include "Sound.h"
using namespace std;
Worker::Worker(char name_init[100], int hp_init, int energy_init)
{
    strcpy(name,name_init);
    hp = hp_init;
    energy = energy_init;

    strcpy(im_key,"worker_im");
    strcpy(so_key,"worker_so");
}

Worker::~Worker()
{

    delete name;
}
void Worker::print()
{


   // cout<<"\nAfisare";
    Resources *p = ResourceManager::instance()->get_resource(string("worker_im"));
   // cout<<"\nafisare1";
    if(!p) cout <<"\nNULL";
    Image *q = NULL;
    Sound *q1 = NULL;
   // cout<<"\nafisare1+1/2";
    q=dynamic_cast <Image*> (p);
    //    else cout<<"\nafisare1.8";
    //cout<<"\nafisare2";
    q->print();
    p = ResourceManager::instance()->get_resource(string("worker_so"));
    q1=dynamic_cast <Sound*> (p);
    q1 -> print();
    cout<<endl<<name<<endl<<hp<<endl<<energy<<endl;
}
