#include<stdio.h>
#include <stdbool.h>
bool ��ڂ̕�����̐擪�����Ɠ�ڂ̕����񂪓�����(const char* ��ڂ̕�����, const char* ��ڂ̕�����)
{
	for (;;) {
		if (*��ڂ̕����� == '\0')
			return true;
		else if (*��ڂ̕����� == *��ڂ̕�����) {
			++��ڂ̕�����;
			++��ڂ̕�����;
		}
		else
			return false;
	}
}

char* strsearch(const char* ��ڂ̕�����, const char* ��ڂ̕�����) {
	for (;;) {
		if (��ڂ̕�����̐擪�����Ɠ�ڂ̕����񂪓�����(��ڂ̕�����, ��ڂ̕�����))
			return (char*)��ڂ̕�����;
		else if (*��ڂ̕����� == '\0')
			return NULL;
		else
			++��ڂ̕�����;
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
fxn********����

2022/10/16 1:11

2��

�Q�̕�����������Ƃ��ē�ڂ̕����񂪈�ڂ̕�����Ɋ܂܂�Ă���Ƃ��͐擪�̈ʒu�i�|�C���^�j��Ԃ��A
������Ȃ��Ƃ���NULL��Ԃ��֐��ƃ��C���ŕ������\������v���O�������쐬�������̂ł����ǂ����Ă����܂������܂���B
���̃v���O�����͎������g�񂾂̂ł����ǂ����ǂ��������炤�܂��쓮����̂��ǂȂ��������Ă��������B

#include<stdio.h>
char strsearch(const char *��ڂ̕�����, const char *��ڂ̕�����){
while (*��ڂ̕����� == *��ڂ̕�����) {
if (*��ڂ̕����� == '\0') return (0) ;
��ڂ̕�����++;
��ڂ̕�����++;
}
return (*��ڂ̕����� - *��ڂ̕�����);
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

�����̎��s��
abcdef
abc
abc

abcdef
xyzabc
NULL

C����֘A | �v���O���~���O�E22�{���E50
*/
