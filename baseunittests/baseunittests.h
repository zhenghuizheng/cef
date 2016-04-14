
// baseunittests.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号

#include "Envrm.h"

// CBaseApp: 
// 有关此类的实现，请参阅 baseunittests.cpp
//

class CBaseApp : public CWinApp
{
public:
	CBaseApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()

private:
	CEnvrm m_env;
};

extern CBaseApp theApp;