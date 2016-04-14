#pragma once
// 初始化base库环境

#include "at_exit.h"

class CEnvrm
{
public:
	CEnvrm();

	~CEnvrm();

private:
	base::AtExitManager exexit_manager;
};

