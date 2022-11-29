#include <stdio.h>
#include <assert.h>
//������v�̃C���f�b�N�X��Ԃ��֐�
int string_find(const char* a, const char* b)
{
	if (*b == '\0')
		return 0;//b�����񂪋�ł���ꍇ
	else if (*a == '\0')
		return -1;//b�����񂪋�łȂ��Aa�����񂪋�ł���ꍇ
	else {
		//a������Ab������o���Ƃ���łȂ��ꍇ
		const char* const first_a = a;//a �̐擪�ʒu���L��
		const char* const first_b = b;//b �̐擪�ʒu���L��
		for (int i = 0;;) {
			if (*a == *b) {
				//���������ł���
				//b �����̕����ɐi�߂�
				if (*++b == '\0') {
					//b ������͏I���Ȃ̂�
					//������v�͍m�肳���
					return i;
				}
				else {
					//a �����̕����ɐi�߂�
					++a;
					continue;
				}
			}
			else {
				//�قȂ镶���ł���
				//�C���f�b�N�X�� +1 ����
				++i;
				assert(i > 0);//INT_MAX�𒴂��Ă��Ȃ����Ƃ��m�F
				//a �� &first_a[i] �ɐݒ肵�A������ Null �����ł��邩���m�F
				if (*(a = &first_a[i]) == '\0')
					return -1;//a �� Null �������w���Ă���̂ŏI��
				else {
					//b �����̈ʒu�ɖ߂��ď������ĊJ
					b = first_b;
					continue;
				}
			}
		}
	}
}
//�e�X�g�p�̃��C���֐�
int main()
{
	for (;;) {
		printf("a: ");
		char a[128];
		if (scanf_s("%[^\n]%*c", a, (unsigned)sizeof a) == 1) {
			printf("b: ");
			char b[64];
			if (scanf_s("%[^\n]%*c", b, (unsigned)sizeof b) == 1) {
				const int i = string_find(a, b);
				if (i == -1)
					printf("�}�b�`���Ȃ�\n");
				else
					printf("�ŏ��ɏo�Ă����ʒu�F%d\n", i);
			}
			else
				break;
		}
		else
			break;
	}
	return 0;
}
/*
https://detail.chiebukuro.yahoo.co.jp/qa/question_detail/q11271669086
1150917455����

2022/11/28 2:02

1��

c����̖�肪������Ȃ��̂ŕ�������𓚂��肢�v���܂��B�Q�l�ɂ����Ă������������ł��B

�����񂩂當������������ĕ�����v�̃C���f�b�N�X��Ԃ��֐����쐬����
�y�����z
�������Ă͂܂�ꍇ�͍ŏ��ɏo�Ă����ʒu
�}�b�`���Ȃ��Ȃ�-1
string.h�͎g�p�s��

�ȏ�ł��B
��낵�����肢�v���܂��B

C����֘A | �v���O���~���O�E35�{��
*/
