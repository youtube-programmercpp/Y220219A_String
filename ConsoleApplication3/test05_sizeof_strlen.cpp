#include <string.h>
#include <stdio.h>
int main()
{
	char s[] = "ABCDEFG";
	printf("strlen �֐�����̖߂�l ... %zu\n", strlen(s)); //C99 ����L��
	//size_t ��
	//�R�Q�r�b�g�ł�Windows�ł� unsigned int �^�i�R�Q�r�b�g�������������j
	//�U�S�r�b�g�ł�Windows�ł� unsigned long long �^�i�U�S�r�b�g�������������j
	printf("������ s �̒����� %zu �ł��B\n", sizeof s - 1);
	s[3] = '\0';//Null����
	printf("strlen �֐�����̖߂�l ... %zu\n", strlen(s)); //C99 ����L��
	printf("�����z�� s �̑傫���� %zu �ł��B\n", sizeof s);
}
