#include <stdio.h>
static char* my_strstr(const char* a, const char* b)
{
	for (; ; ) { 
		if (*b == '\0')
			return (char*)a;
		else if (*a == '\0')
			return NULL;
		else if (*a == *b) {
			const char* const a0 = a++;
			const char* const b0 = b++;
			for (;;) {
				if (*b == '\0')
					return (char*)a0;
				else if (*a == *b) {
					++a;
					++b;
				}
				else
					break;
			}
			b = b0;
			a = a0 + 1;
		}
		else
			++a;
	}
}
int main(void) {
	const char* const s = "bbbbbabbbbbc";
	const char* const b = "bbb"         ;
	for (const char* a = s;;) {
		const char* const p = my_strstr(a, b);
		if (p) {
			printf("%td\n", p - s);
			a = p + 1;
		}
		else
			break;
	}
	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q13269399128
1251354923����

2022/10/11 22:47

1��

strstr�݂����Ȃ�̎�����������ł��B
�Ⴆ�� string��bbbbbabbbbbc
pattern��bbb �Ƃ����Ƃ��Abbb�̃p�^�[���}�b�`��
0
1
2
6
7
8
�݂����ɏo�͂��������ł��B�܂��}�b�`���ĂȂ��ꍇ�͉����\�������܂���B�ȉ��̃R�[�h���x�[�X�ɋ����Ă��������܂���ł��傤���H
#define MAX 30
void fail(char* pa, int* failure)
{ int i, j;
int n = strlen(pa);
failure[0] = -1;
for (j = 1; j < n; j++) {
i = failure[j - 1];
while ((pa[j] != pa[i + 1]) && (i >= 0))
i = failure[i];
if (pa[j] == pa[i + 1])
failure[j] = i + 1;
else failure[j] = -1;
}
}
int my_strstr(char* string, char* pa, int* failure)
{
int i, j;
int lens = strlen(string);
int lenp = strlen(pa);
for (i = 0, j = 0; i < lens; ) { //�킩��Ȃ��c
while (i < lens && j < lenp)
{
if (string[i] == pa[j]) {
i++; j++;
}
else if (j == 0) i++;
else j = failure[j - 1] + 1;
}
return ((j == lenp) ? (i - lenp) : -1);
i = i - lenp + 1; j = 0;
}

}

int main(void) {
char string[MAX + 1] = "\0";
char pa[MAX + 1] = "\0";
int failure[MAX + 1] = { 0, };
fgets(string, sizeof(string), stdin);
fgets(pa, sizeof(pa), stdin);
fail(pa, failure);
printf("%d",my_strstr(string, pa, failure));
return 0;
}

C����֘A | �v���O���~���O�E49�{���E50
*/
