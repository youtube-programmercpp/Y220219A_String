#include <string.h>
int main()
{
	wchar_t ch = L'字'; //ワイド文字 (Unicode 文字)
	wchar_t s1[] = L"漢字";
	char s2[] = "漢字";
	const size_t n1 = wcslen(s1);
	const size_t n2 = strlen(s2);
}
