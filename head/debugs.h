#ifndef _DEBUG_H_
#define _DEBUG_H_

#include<fstream>
#include<string>
#include<ctime>
#include<map>
#include<windows.h>
using namespace std;
namespace gen
{
	void logInit();
	string getTimeLog();
	enum logType { Debug, Info, Waring, Error, Fatal };
	//int debugType;
	//string title = "MSDos-RPG Alpha 0.1.1";
	//void msgbox(string, _In_ UINT);
	LPCWSTR stringToLPCWSTR(string);
};
namespace debug
{
	using namespace gen;
	void outLog(logType, string);
	void forceExit(int,int);
	void debugConsole(string);
};

namespace release
{
	using namespace gen;
	void outLog(logType, string);
	void safeExit(int,int);
	void console(string);
};

#endif