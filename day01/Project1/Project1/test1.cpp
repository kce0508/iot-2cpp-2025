#include <stdio.h>

void func();			// �Լ�����
void func1();

int main()
{
	char ch = 'a';
	int num = 10;
	func();				// �Լ�ȣ��
	func1('a');			//
	return 0;

}
void func()				// �Լ� ����. �Լ��Ӹ�: ��� �Լ��̸�(�Է�)
{
	printf("Hello\n");
}
void func1(char arg)		// �Է� O, arg = 'a'
{
	printf("%c Hello\n", arg);
}
int func2(int n)	// ����ְ�, �Է��ִ�.
{

}

// �Լ��� ����, �Լ��� ȣ��, �Լ��� ����