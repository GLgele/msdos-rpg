#include "../head/enemy.h"

using namespace std;

enemy::enemy()
{
    
}


enemy::enemy(player &pl)
{
    setState(1);
    while(getState() == 0)
    {
        if(getHealth() <= 0)
        {
            setState(0);
        }
    }
    if(isDead())
    {
        for(int i=0;i<10;i++)
        {
            pl.addItem(pl.emptyPos(),_item[i]);
        }
    }
}

enemy::~enemy()
{

}

bool enemy::isDead()
{
    if(getState() == 0)
    {
        return true;
    }
    return false;
}

