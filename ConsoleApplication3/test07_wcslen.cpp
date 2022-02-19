#include <string.h>
int main()
{
	wchar_t ch = L'š'; //ƒƒCƒh•¶š (Unicode •¶š)
	wchar_t s1[] = L"Š¿š";
	char s2[] = "Š¿š";
	const size_t n1 = wcslen(s1);
	const size_t n2 = strlen(s2);
}
