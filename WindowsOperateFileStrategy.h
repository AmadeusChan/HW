#ifndef WINDOWS_OPERATE_FILE_STRATEGY_H
#define WINDOWS_OPERATE_FILE_STRATEGY_H

#include <string>
#include "OperateFileStrategy.h"
using namespace std;

class WindowsOperateFileStrategy : public OperateFileStrategy
{
public:
	string read_file(string file_name, string context);
	void write_file(string file_name, string context);
};

#endif