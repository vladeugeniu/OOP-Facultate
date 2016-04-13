#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H
#include <Resources.h>
#include <map>

using namespace std;

class ResourceManager{
    private:
        static ResourceManager* s;
        map <string,Resources*> rm;
        ResourceManager();
        ~ResourceManager();
    public:
     static ResourceManager* instance(){return s;}
     void add_resource (string,Resources*);
     Resources* get_resource(string);
    void printManager();
};

#endif // RESOURCEMANAGER_H
