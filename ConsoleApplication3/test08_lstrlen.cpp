#include <Windows.h>
int main()
{
	//long �̈Ӗ�
	const int n1 = lstrlenA( "����");//ANSI�� A �ł��傤
	const int n2 = lstrlenW(L"����");//Wide ������ W
	//strlen, wcslen
	//�g������
	//�ǂ���ł��卷�Ȃ�

	//�W�����C�u������ Windows API
	//������֐���ʂƂ������ƂŌ����΁c
}
