#include "ResourceManager.h"
#include "Resources.h"
#include "Image.h"
#include "Sound.h"
#include <iterator>
ResourceManager* ResourceManager::s(new ResourceManager) ;

ResourceManager::ResourceManager(){}

ResourceManager::~ResourceManager()
{
    //dtor
}
void ResourceManager::add_resource(string key, Resources* object)
{
    rm[key] = object;
}

void ResourceManager::remove_resource(string key)
{
    rm.erase(key);
}

Resources* ResourceManager::get_resource(string key)
{
    cout<<endl<<key;
    if(rm.find(key) == rm.end()) return NULL;
    cout<<endl;
    //cout<<"merge";
    //if(rm[key]==NULL) cout<<"NU";
    //else cout<<"DA";
    //rm[key]->print();
    return rm[key];

}
//void ResourceManager::printManager()
/*{
    map<char*,Resources*>::iterator i;

    for(i = rm.begin(); i != rm.end(); i++)
    {
        Image *p = dynamic_cast <Image*>(i->second);
        p->print();
    }
}
*/
