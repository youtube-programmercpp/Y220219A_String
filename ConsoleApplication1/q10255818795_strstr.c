#include <stdio.h>
int sa��sb�Ŏn�܂��Ă���(const char sa[] , const char sb[])
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
int sa����sb���o������(const char sa[] , const char sb[])
{
	for (;;) {
		if (sa��sb�Ŏn�܂��Ă���(sa, sb))
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
			{ "�܂܂�Ă��Ȃ�"
			, "�܂܂�Ă���"
			};
			printf("��%s\n", a[sa����sb���o������(sentence, str)]);
		}
		else
			break;
	}
	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q10255818795
ID����J����

2022/1/22 12:35

0��

����2�Ԃ̖��̕�����sentence����str���o�����邩�ǂ������肵�āA���̌��ʂ�\����������@���킩��Ȃ��č����Ă��܂��B
����2�Ԃ̖��̃v���O�����̓����������Ă��������B�܂��A�����C����̃v���O���~���O�ł��B

�摜
C����֘A | �v���O���~���O�E4�{��
*/
