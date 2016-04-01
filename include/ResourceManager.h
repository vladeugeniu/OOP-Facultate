#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H
#include <Resources.h>
#include <map>

using namespace std;

class ResourceManager{
    private:
        static ResourceManager* s;
        map <char*,Resources*> rm;
        ResourceManager();
        ~ResourceManager();
    public:
     static ResourceManager* instance(){return s;}
     void add_resource (char*,Resources&);
     void remove_resource(char*);
     Resources* get_resource(char*);
    void printManager();
};

#endif // RESOURCEMANAGER_H
