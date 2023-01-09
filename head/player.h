#include "../head/sprite.h"
#include "../head/item.h"
#include<iostream>
#include<cstdio>
using namespace std;
#ifndef _PLAYER_H_
#define _PLAYER_H_
class player : public sprite
{
    public:
    player();
    ~player();
    string name;
    bool addItem(int pos, string itemName);
    bool delItem(int pos);
    bool newQuest(int id);
    bool fnsQuest(int id);
    bool delQuest(int id);
    int questf(int pos);
    int emptyPos();
    void listQuest();
    string questName(int id);
    void checkQuest(int id);
    int isQuestMax();

    private:
    string inv[50];
    item _INV[50];
    int quest[15];

    string quests[100] = {"", "TestQuest", "NewQuest", "3", "4", "5", "quest6", "No.7", "8", "9", "10"};
};

#endif
