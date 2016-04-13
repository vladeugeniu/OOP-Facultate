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


Submarine* add_submarine()
{
      Resources *im=new Image("poza_test2.png");
        Resources *so=new Sound("test.mp3");

        ResourceManager::instance()->add_resource("submarine_so",so);
        ResourceManager::instance()->add_resource("submarine_im",im);

    Submarine* new_submarine = new Submarine;

    return new_submarine;
}

Tank* add_tank()
{

        Resources *im=new Image("poza_test2.png");
        Resources *so=new Sound("test.mp3");

        ResourceManager::instance()->add_resource("tank_so",so);
        ResourceManager::instance()->add_resource("tank_im",im);

    Tank* new_tank = new Tank;

    return new_tank;
}

Machine* add_machine()
{

        Resources *im=new Image("poza_test2.png");
        Resources *so=new Sound("test.mp3");

        ResourceManager::instance()->add_resource("machine_so",so);
        ResourceManager::instance()->add_resource("machine_im",im);

    Machine* new_machine = new Machine;

    return new_machine;
}

Worker* add_worker()
{

        Resources *im=new Image("poza_test2.png");
        Resources *so=new Sound("test.mp3");

        ResourceManager::instance()->add_resource("worker_so",so);
        ResourceManager::instance()->add_resource("worker_im",im);

    Worker* new_worker = new Worker;

    return new_worker;
}

Engineer* add_engineer()
{

        Resources *im=new Image("poza_test2.png");
        Resources *so=new Sound("test.mp3");

        ResourceManager::instance()->add_resource("engineer_so",so);
        ResourceManager::instance()->add_resource("engineer_im",im);

    Engineer* new_engineer = new Engineer;

    return new_engineer;
}

Soldier* add_soldier()
{

       Resources *im=new Image("poza_test2.png");
        Resources *so=new Sound("test.mp3");

        ResourceManager::instance()->add_resource("soldier_so",so);
        ResourceManager::instance()->add_resource("soldier_im",im);

    Soldier* new_soldier = new Soldier;

    return new_soldier;
}

int main()
{
    Interface *v[100];
    int i, n, decision;
    cout << "n= ";
    cin >> n;


    for(i = 0; i < n; i++)
    {
        cout << "\nPentru a creea un muncitor, apasati tasta 1";
        cout << "\nPentru a creea un soldat, apasati tasta 2";
        cout << "\nPentru a creea un inginer, apasati tasta 3";
        cout << "\nPentru a creea o masina, apasati tasta 4";
        cout << "\nPentru a creea un tank, apasati tasta 5";
        cout << "\nPentru a creea un submarin, apasati tasta 6\n";
        cin >> decision;
        switch(decision){
        case 1:
            v[i] = add_worker();
            break;
        case 2:
            v[i] = add_soldier();
            break;
        case 3:
            v[i] = add_engineer();
            break;
        case 4:
            v[i] = add_machine();
            break;
        case 5:
            v[i] = add_tank();
            break;
        case 6:
            v[i] = add_submarine();
            break;
        default: i--;
        }
    }

for(i = 0; i < n; i++)
    v[i] -> print();

}
