#pragma once

#include "stdafx.h"

extern "C"
{
	struct Registers
	{
		DWORD deax;
		DWORD debx;
		DWORD decx;
		DWORD dedx;
	};

	struct CPUInfo
	{
		struct Registers reg;
		char cpuType[64];
	};

	__declspec(dllexport) struct ProcessInfo {
		DWORD th32ProcessID;
		TCHAR * szExeFile;
		struct ProcessInfo * next;
	};

	__declspec(dllexport) struct HardwareInfo {
		struct CPUInfo cpuInfo;
	};

	__declspec(dllexport) struct ProcessInfo * processScan(struct ProcessInfo  * P);


	void getGPUInfo();
	void initCpu(DWORD, struct HardwareInfo &hardwareInfo);
	void getCPUInfo(struct HardwareInfo &hardwareInfo);

	__declspec(dllexport) void hardwareInfoScan(struct HardwareInfo &hardwareInfo);

	__declspec(dllexport) char * osInfoScan(char *);
	__declspec(dllexport) void userInfoScan();
	__declspec(dllexport) void fileInfoScan();
}