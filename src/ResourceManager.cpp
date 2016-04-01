#include "ResourceManager.h"
#include "Resources.h"
#include "Image.h"
#include "Sound.h"
#include <iterator>
ResourceManager* ResourceManager::s( new ResourceManager );

ResourceManager::ResourceManager(){}

ResourceManager::~ResourceManager()
{
    //dtor
}
void ResourceManager::add_resource(char* key,Resources& object)
{
    rm[key] = &object;
}

void ResourceManager::remove_resource(char* key)
{
    rm.erase(key);
}

Resources* ResourceManager::get_resource(char* key)
{
    return rm[key];

}void ResourceManager::printManager()
{
    map<char*,Resources*>::iterator i;

    for(i = rm.begin(); i != rm.end(); i++)
    {
        Image *p = dynamic_cast <Image*>(i->second);
        p->print();
    }
}
