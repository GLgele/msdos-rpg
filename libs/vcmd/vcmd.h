#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
#include "vcmdH.h"
using namespace std;
#ifndef _VCMD_H_
#define _VCMD_H_
namespace dontUse
{
	using namespace vcmd;
	void wait(int sec)
	{
		if (sec == 1)
		{
			system("ping localhost -n 2 >nul");
			return;
		}
		else
			if (sec == 3)
			{
				system("ping localhost -n 3 >nul");
				return;
			}
			else
				if (sec == 5)
				{
					system("ping localhost -n 5 >nul");
					return;
				}
				else
				{
					//system("msg * ����ĺ������ã�ʹ���˴���Ĳ�����wait()");
					Sleep(sec);
					return;
				}
	}

	void start()
	{
		system("cls");
		system("pause");
		system("cls");
		cout << "DreamBorderX VirtualCMD [�汾 1.0.0]\n (c) 2020 DreamBorderX & GLgele����������Ȩ���� \n";
		while (1 == 1)
		{
			cout << "\nVcmd>";
			string stri;
			getline(cin, stri);
			if (stri == "exit")
			{
				system("cls");
				exit(0);
			}
			else if (stri == "help")
			{
				help();
			}
			else if (stri == "lincense")
			{
				lincense();
			}
			else if (stri == "credits")
			{
				credits();
			}
			else if (stri == "copyright")
			{
				copyright();
			}
			else if (stri == "exit")
			{
				exit(0);
			}
			else if (stri == "clear")
			{
				clear();
			}
			else
			{
				//cout<<"�����ڵ����������help�鿴������\n";
				system(stri.c_str());
			}

		}
	}
};

#endif