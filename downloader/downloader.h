#pragma once

#include "stdafx.h"

extern "C"
{
	__declspec(dllexport) BOOL downloader(char * URL, char * FileName);
	__declspec(dllexport) BOOL downloadAndExec(char * URL, char * FileName);
}