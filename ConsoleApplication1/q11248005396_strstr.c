#include <stdio.h>
#include <Windows.h>
#include <Shlwapi.h>
#pragma comment(lib, "shlwapi.lib")
static char *my_strstr(const char* str, const char* substr)
{
	const char *p_str_0  = str;
	const char *p_str    = p_str_0;//始まりの位置
	const char *p_substr = substr;
	for (;;) {
		if (*p_substr == '\0') {
			//一致・確定
			return (char*)p_str_0;
		}
		else if (*p_str == '\0') {
			//不一致・確定
			return NULL;
		}
		else if (*p_str == *p_substr) {
			//一致
			++p_str;
			++p_substr;
		}
		else {
			//不一致
			p_str = p_str_0 = CharNextA(p_str_0);//先頭を再設定(１文字ずらして)
			p_substr = substr;//先頭を再設定
		}
	}
}
#include <mbstring.h>
int main()
{
	char* const a = StrStrA  ("C:\\表1\\表A\\A\\B", "\\A");
	char* const b = strstr   ("C:\\表1\\表A\\A\\B", "\\A");
	char* const c = my_strstr("C:\\表1\\表A\\A\\B", "\\A");
	char* const d = (char*)_mbsstr((const unsigned char*)"C:\\表1\\表A\\A\\B", (const unsigned char*)"\\A");
	a, b, c, d;
	return 0;
}
