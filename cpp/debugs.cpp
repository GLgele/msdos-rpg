#include "../head/debugs.h"
#include "../libs/vcmd/vcmd.h"
using namespace vcmd;

namespace gen
{
	ofstream log("gamefile/logs/" + gen::getTimeLog() + ".log");
	map<int, string> errorTable;
};

using namespace gen;

LPCWSTR gen::stringToLPCWSTR(string orig)
{
	size_t origsize = orig.length() + 1;
	const size_t newsize = 100;
	size_t convertedChars = 0;
	wchar_t* wcstring = (wchar_t*)malloc(sizeof(wchar_t) * (orig.length() - 1));
	mbstowcs_s(&convertedChars, wcstring, origsize, orig.c_str(), _TRUNCATE);
	return wcstring;
}

/*void gen::msgbox(string msg, _In_ UINT uType)
{
	MessageBox(NULL, stringToLPCWSTR(msg), stringToLPCWSTR(gen::title), uType);
	if (debugType == 1)
	{
		debug::outLog(gen::Debug, "msgbox(" + msg + ")");
	}
}*/

string gen::getTimeLog()
{
	time_t result = time(nullptr);
	string ts = ctime(&result);
	ts = ts.substr(4);
	while (ts.find(" ") != -1)
	{
		ts.replace(ts.find(" "), 1, "-");
	}
	while (ts.find(":") != -1)
	{
		ts.replace(ts.find(":"), 1, "-");
	}
	ts = ts.replace(ts.length() - 1, 1, "");
	return ts;
}

void gen::logInit()
{
	errorTable[1] = "Force exit";
	errorTable[2] = "Debug and Release are both defined";
	errorTable[3] = "Can't call Python";
	errorTable[4] = "Can't call Control Handler";
	errorTable[5] = "Can't call jsonReader";
	errorTable[6] = "Can't call updateChecker";
	errorTable[2147483648] = "If you see this,then I did something bad.";
}

void debug::outLog(debug::logType type, string msg)
{
	time_t result = time(nullptr);
	string ts = ctime(&result);
	ts.replace(ts.length() - 1, 1, "");
	string t;
	switch (type)
	{
		case 0: {t = "Debug"; break; }
		case 1: {t = "Info"; break; }
		case 2: {t = "Waring"; break; }
		case 3: {t = "Error"; break; }
		case 4: {t = "Fatal"; break; }
	}
	gen::log << "[" << t << " " << ts << "]:" << msg << endl;
}

void debug::forceExit(int code,int debugType)
{
	if (code == 0)
	{
		debug::outLog(debug::Waring, "Can't force exit with code 0!Please use exit(0).");
		return;
	}
	debug::outLog(debug::Debug, "forceExit(" + to_string(code) + ")");
	debug::outLog(debug::Info, "Force exiting with code" + to_string(code));
	debug::outLog(debug::Error, "Force exit!");
	debug::outLog(debug::Error, "FEC " + to_string(code) + ":" + errorTable[code]);
	release::safeExit(-1, debugType);
}

void debug::debugConsole(string stri)
{
	/*if (stri == "exit")
	{
		system("cls");
		exit(0);
	}
	else*/ if (stri == "help")
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
		/* code */
	}
	else if (stri == "clear")
	{
		clear();
	}
	else
	{
		//cout<<"不存在的命令，请输入help查看帮助！\n";
		system(stri.c_str());
	}
}

void release::outLog(logType type, string msg)
{
	if (type == gen::Debug)
	{
		/* pass */
	}
	debug::outLog(type, msg);
}

void release::safeExit(int code,int debugType)
{
	if (code == -1)
	{
		if(debugType == 1) debug::outLog(gen::Debug, "GameExit(Error)");
	}
	else
	{
		if (debugType == 1) debug::outLog(gen::Debug, "GameExit(" + to_string(code) + ")");
	}
}