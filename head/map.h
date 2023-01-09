#ifndef _MAP_H_
#define _MAP_H_

#include<string>
using namespace std;
class Map
{  
    public:
    Map();
    Map(int,string,int,int,int[],int,int);
    ~Map();
    int getPoint(int,int);
    int getID;
    string getName();
    int* getPlayerPos();

    private:
    int id;
    string name;
    int across;
    int down;
    int* mapp;
    int pposx;
    int pposy;
    int lastID;
    int nextID;
};

#endif