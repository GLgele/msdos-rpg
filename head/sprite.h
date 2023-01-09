#include<string>
using namespace std;
#ifndef _SPRITE_H_
#define _SPRITE_H_


class sprite
{
    private:
    int state;
    double health;
    string name;
    int ATK;
    int DEF;

    public:
    sprite();
    sprite(int _ATK,int _DEF);
    ~sprite();
    void setHealth(double _health);
    void setState(int _state);
    void setName(string name);
    void setATK(int _ATK);
    void setDEF(int _DEF);
    int getHealth();
    int getState();
    int getATK();
    int getDEF();
};

#endif
