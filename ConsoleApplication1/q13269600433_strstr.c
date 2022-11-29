#include<stdio.h>
#include <stdbool.h>
bool 一つ目の文字列の先頭部分と二つ目の文字列が等しい(const char* 一つ目の文字列, const char* 二つ目の文字列)
{
	for (;;) {
		if (*二つ目の文字列 == '\0')
			return true;
		else if (*一つ目の文字列 == *二つ目の文字列) {
			++一つ目の文字列;
			++二つ目の文字列;
		}
		else
			return false;
	}
}

char* strsearch(const char* 一つ目の文字列, const char* 二つ目の文字列) {
	for (;;) {
		if (一つ目の文字列の先頭部分と二つ目の文字列が等しい(一つ目の文字列, 二つ目の文字列))
			return (char*)二つ目の文字列;
		else if (*一つ目の文字列 == '\0')
			return NULL;
		else
			++一つ目の文字列;
	}
}
int main(void) {
	char str1[256], str2[256], * ret;
	(void)scanf_s("%s", str1, (int)sizeof str1);
	(void)scanf_s("%s", str2, (int)sizeof str2);
	ret = strsearch(str1, str2);
	if (ret == NULL) printf("NULL\n");
	else {
		printf("%s\n", ret);
	}
	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q13269600433
fxn********さん

2022/10/16 1:11

2回答

２個の文字列を引数として二つ目の文字列が一つ目の文字列に含まれているときは先頭の位置（ポインタ）を返し、
見つからないときはNULLを返す関数とメインで文字列を表示するプログラムを作成したいのですがどうしてもうまくいきません。
下のプログラムは自分が組んだのですがどこをどう直したらうまく作動するのかどなたか教えてください。

#include<stdio.h>
char strsearch(const char *一つ目の文字列, const char *二つ目の文字列){
while (*一つ目の文字列 == *二つ目の文字列) {
if (*一つ目の文字列 == '\0') return (0) ;
一つ目の文字列++;
二つ目の文字列++;
}
return (*一つ目の文字列 - *二つ目の文字列);
}
int main(void){
char str1[256], str2[256], *ret ;
scanf("%s", str1) ;
scanf("%s", str2) ;
ret = strsearch(str1, str2) ;
if(ret==NULL) printf("NULL\n") ;
else{
printf("%s\n", ret) ;
}
return 0;
}

正解の実行例
abcdef
abc
abc

abcdef
xyzabc
NULL

C言語関連 | プログラミング・22閲覧・50
*/
