#include <stdlib.h>
size_t strlen(const char* p)
{
	const char* const start = p;//�J�n�_���o���Ă���
	for (;;) {
		if (*p == '\0')
			return p - start;//�I���
		else
			++p;//�|�C���^�ϐ������ɐi�߂�
	}
}


int main()
{
	//�߂�l�����Ȃ��Ƃ����ӎv�\�� (void)
	const size_t n = strlen("12");
}
