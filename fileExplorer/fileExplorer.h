#pragma once

#define MAX_FILE_LIST 4096

extern "C" 
{
	__declspec(dllexport) char * fileExplorer(const char * dir);
}