#include <Windows.h>
int main()
{
	//long の意味
	const int n1 = lstrlenA( "漢字");//ANSIの A でしょう
	const int n2 = lstrlenW(L"漢字");//Wide 文字の W
	//strlen, wcslen
	//使い分け
	//どちらでも大差ない

	//標準ライブラリと Windows API
	//文字列関数一般ということで言えば…
}
