#include <string.h> //C����p�̕�����֐����g�p���邽�߂� include
#include <string> //C++�� std::string �N���X���g�p���邽�߂� include
#include <iostream>
int main()
{
	static const char s[] = "ABC[DEF]GHI";
	if (const auto p1 = strchr(s, '[')) {
		const auto start = p1 + 1;
		if (const auto p2 = strchr(start, ']')) {
			std::cout << std::string(start, p2 - start) << '\n';
		}
	}
}
