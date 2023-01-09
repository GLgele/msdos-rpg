#ifndef _PRE_LOAD_H_
#define _PRE_LOAD_H_
#include<cstdio>
#include<map>
#include<cstdlib>
#include<string>
#include "head/map.h"
#include "head/enemy.h"
#include "head/sprite.h"
#include "head/player.h"
using namespace std;
Map preloadTestMap()
{
	int Tmap[10*10] = { 0,0,0,0,0,0,9,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,0,0,0,0,0,
						0,0,0,0,0,8,0,0,0,0 };
	Map TestMap(-1, "Test Map", 10, 10, Tmap, -1, -1);
	return TestMap;
}
#endif // !_PRE_LOAD_H_
