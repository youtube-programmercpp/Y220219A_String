#include <string.h>
#include <string>
#include <iostream>
int main()
{
	static const char s[] = "ABC*DEF";//static �Ə����ƃf�[�^��`(static �������Ə���)
	if (const char* const p = strchr(s, '*')) {
		std::cout << std::string(s, p - s) << '\n';
	}
	else {
		std::cout << "�u*�v�͌�����܂���ł����B\n";
	}
}
