#include <string.h> //C言語用の文字列関数を使用するための include
#include <string> //C++の std::string クラスを使用するための include
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
