#include <string.h>
int main()
{
	wchar_t ch = L'��'; //���C�h���� (Unicode ����)
	wchar_t s1[] = L"����";
	char s2[] = "����";
	const size_t n1 = wcslen(s1);
	const size_t n2 = strlen(s2);
}
