#include <string.h>
#include <stdio.h>
int main()
{
	char s[] = "ABCDEFG";
	printf("strlen 関数からの戻り値 ... %zu\n", strlen(s)); //C99 から有効
	//size_t は
	//３２ビット版のWindowsでは unsigned int 型（３２ビット符号無し整数）
	//６４ビット版のWindowsでは unsigned long long 型（６４ビット符号無し整数）
	printf("文字列 s の長さは %zu です。\n", sizeof s - 1);
	s[3] = '\0';//Null文字
	printf("strlen 関数からの戻り値 ... %zu\n", strlen(s)); //C99 から有効
	printf("文字配列 s の大きさは %zu です。\n", sizeof s);
}
