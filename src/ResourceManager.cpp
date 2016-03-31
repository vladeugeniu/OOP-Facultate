#include "ResourceManager.h"
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
}
