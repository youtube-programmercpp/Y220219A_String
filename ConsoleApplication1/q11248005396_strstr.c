#include <stdio.h>
#include <Windows.h>
#include <Shlwapi.h>
#pragma comment(lib, "shlwapi.lib")
static char *my_strstr(const char* str, const char* substr)
{
	const char *p_str_0  = str;
	const char *p_str    = p_str_0;//�n�܂�̈ʒu
	const char *p_substr = substr;
	for (;;) {
		if (*p_substr == '\0') {
			//��v�E�m��
			return (char*)p_str_0;
		}
		else if (*p_str == '\0') {
			//�s��v�E�m��
			return NULL;
		}
		else if (*p_str == *p_substr) {
			//��v
			++p_str;
			++p_substr;
		}
		else {
			//�s��v
			p_str = p_str_0 = CharNextA(p_str_0);//�擪���Đݒ�(�P�������炵��)
			p_substr = substr;//�擪���Đݒ�
		}
	}
}
#include <mbstring.h>
int main()
{
	char* const a = StrStrA  ("C:\\�\1\\�\A\\A\\B", "\\A");
	char* const b = strstr   ("C:\\�\1\\�\A\\A\\B", "\\A");
	char* const c = my_strstr("C:\\�\1\\�\A\\A\\B", "\\A");
	char* const d = (char*)_mbsstr((const unsigned char*)"C:\\�\1\\�\A\\A\\B", (const unsigned char*)"\\A");
	a, b, c, d;
	return 0;
}
