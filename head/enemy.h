#include "../head/sprite.h"
#include "../head/item.h"
#include "../head/player.h"

using namespace std;
#ifndef _ENEMY_H_
#define _ENEMY_H_

class enemy : public sprite
{
    public:
    enemy();
    enemy(player &pl);
    ~enemy();
    bool isDead();

    private:
    string _item[10];
    string _armor[10];
};


#endif