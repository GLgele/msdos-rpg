#include <string>
using namespace std;
#ifndef _ITEM_H_
#define _ITEM_H_

class item
{
    private:
    string name;
    int used;
    int nid;
    string sid;
    int type;
    int adds[1000];
    int specials[1000];
    int nids[1000];
    string sids[1000];
    string names[1000];

    public:
    item(string);
    item();
    ~item();
    void setName();
    string getName();
    string getSid();
    int getNid();
    int getUsed();
    int setUsed(int);
    int useUsed(int);
    int* getAdds();
    int* getSpecials();
    int addAdds(int,int);
    int addSpecails(int,int);
};

#endif