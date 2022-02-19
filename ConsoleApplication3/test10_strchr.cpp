#include <string.h>
#include <string>
#include <iostream>
int main()
{
	static const char s[] = "ABC*DEF";//static と書くとデータ定義(static が無いと処理)
	if (const char* const p = strchr(s, '*')) {
		std::cout << std::string(s, p - s) << '\n';
	}
	else {
		std::cout << "「*」は見つかりませんでした。\n";
	}
}
