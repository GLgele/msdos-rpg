#include<cstdio>
#include<Windows.h>
using namespace std;
#ifndef _VCMDH_H_
#define _VCMDH_H_
namespace vcmd
{
	void help()
	{
		printf("该模拟CMD由GLgele编写。指令在Command.txt里。\n");
	}


	void lincense()
	{
		printf("请查看lincense文件。\n");
	}

	void credits()
	{
		printf("Dream Border X \nGLgele \n");
	}

	void copyright()
	{
		printf("(c) 2020 DreamBorderX & GLgele。保留所有权利。 \n");
	}

	void clear()
	{
		system("cls");
	}
};

#endif 
