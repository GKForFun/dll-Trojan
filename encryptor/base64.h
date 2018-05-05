#ifndef __BASE64_H__
#define __BASE64_H__

enum {BASE64_OK = 0, BASE64_INVALID};

#define BASE64_ENCODE_OUT_SIZE(s)	(((s) + 2) / 3 * 4)
#define BASE64_DECODE_OUT_SIZE(s)	(((s)) / 4 * 3)

extern "C" {
	__declspec(dllexport) int base64_encode(const char *in, int inlen, char *out);

	__declspec(dllexport) int base64_decode(const char *in,  int inlen,  char *out);
}

#endif /* __BASE64_H__ */

