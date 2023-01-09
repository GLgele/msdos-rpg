#include "../head/sprite.h"
using namespace std;


sprite::sprite()
{
    
}

sprite::sprite(int _ATK,int _DEF)
{
    setState(1);
    setATK(_ATK);
    setDEF(_DEF);
    while(getState() == 0)
    {
        if(getHealth() <= 0)
        {
            setState(0);
        }
    }
}

sprite::~sprite()
{
    
}

void sprite::setName(string _name)
{
    name = _name;
}

void sprite::setHealth(double _health)
{
    health = _health;
}

void sprite::setState(int _state)
{
    state = _state;
}

void sprite::setATK(int _ATK)
{
    ATK = _ATK;
}

void sprite::setDEF(int _DEF)
{
    DEF = _DEF;
}

int sprite::getHealth()
{
    return health;
}

int sprite::getState()
{
    return state;
}

int sprite::getATK()
{
    return ATK;
}

int sprite::getDEF()
{
    return DEF;
}


