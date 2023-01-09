#ifndef _GENERAL_H_
#define _GRNERAL_H_
#include<string.h>
#include<map>
#include "sprite.h"
#include "player.h"
#include "enemy.h"
#include "item.h"
#include "map.h"
using namespace std;
namespace gen
{
	int debugType;
	string title = "MSDos-RPG Alpha 0.1.1";
	player p;
	map<string, Map> MapTable;
	map<string, string> transTable;
}
#endif