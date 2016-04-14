#include "stdafx.h"
#include "Envrm.h"

#include "logging.h"
#include "command_line.h"
#include "trace_event.h"


CEnvrm::CEnvrm()
{
	CommandLine::Init(0, NULL);
	base::debug::TraceLog::GetInstance();

	logging::LoggingSettings lgsts;
	logging::PathChar *pPath = L"./mfc.log";

	lgsts.log_file = pPath;

	logging::InitLogging(lgsts);

	LOG(INFO) << "程序开启\r\n";
}


CEnvrm::~CEnvrm()
{
	LOG(INFO) << "程序结束\r\n";
	logging::CloseLogFile();
	CommandLine::Reset();

	base::debug::TraceLog::DeleteForTesting();
}
