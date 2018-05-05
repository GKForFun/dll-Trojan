#pragma once
#include "stdafx.h"

#define REVERSEIP "127.0.0.1"
#define REVERSEPORT 23333

extern "C"
{
	__declspec(dllexport) BOOL reverse_http();
}