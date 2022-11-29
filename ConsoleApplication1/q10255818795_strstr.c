#include <stdio.h>
int saがsbで始まっている(const char sa[] , const char sb[])
{
	for (;;) {
		if (*sb == '\0')
			return 1;
		else if (*sb == *sa) {
			++sa;
			++sb;
		}
		else
			return 0;
	}
}
int sa中にsbが出現する(const char sa[] , const char sb[])
{
	for (;;) {
		if (saがsbで始まっている(sa, sb))
			return 1;
		else if (*++sa == '\0')
			return 0;
	}
}
int main()
{
	char sentence[] = "This is a pen. That is an apple.";
	for (;;) {
		char str[sizeof sentence];
		if (scanf_s("%s", str, (unsigned)sizeof str) == 1) {
			static const char* const a[] =
			{ "含まれていない"
			, "含まれている"
			};
			printf("→%s\n", a[sa中にsbが出現する(sentence, str)]);
		}
		else
			break;
	}
	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q10255818795
ID非公開さん

2022/1/22 12:35

0回答

この2番の問題の文字列sentence中にstrが出現するかどうか判定して、その結果を表示させる方法がわからなくて困っています。
この2番の問題のプログラムの答えを教えてください。また、これはC言語のプログラミングです。

画像
C言語関連 | プログラミング・4閲覧
*/
