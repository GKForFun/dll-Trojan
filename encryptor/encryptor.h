#pragma once

#include "base64.h"

extern "C" {
	__declspec(dllexport) int base64_encode(const char *in,  int inlen, char *out);

	__declspec(dllexport) int base64_decode(const char *in,  int inlen,  char *out);
}