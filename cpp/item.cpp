#include "../head/item.h"
using namespace std;


item::item(string id)
{
    sid = id;
    setName();
}

item::item()
{
    
}

item::~item()
{

}

void item::setName()
{
    int i;
    for(i=0;i<=999;i++)
    {
        if(sid == sids[i])
        {
            break;
        }
    }
    nid = nids[i];
    name = names[i];
}

string item::getName()
{
    return name;
}

string item::getSid()
{
    return sid;
}

int item::getNid()
{
    return nid;
}

int item::getUsed()
{
    return used;
}

int item::setUsed(int _used)
{
    used = _used;
    return 0;
}

int item::useUsed(int _used)
{
    used -= _used;
    return 0;
}

int* item::getAdds()
{
    return adds;
}

int* item::getSpecials()
{
    return specials;
}

int item::addAdds(int id,int pos)
{
    /* building... */
    return 0;
}

int item::addSpecails(int id,int pos)
{
    /* building... */
    return 0;
}

