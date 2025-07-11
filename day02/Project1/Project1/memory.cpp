#include <stdio.h>

int a;
const int global_c = 100;

void func() {
	printf("function: %p\n", func);			// �Լ��� �̸� = �ּ� = �迭
}

int func2() {
	return 1;
}

int main()
{
	int b = 100;									// b
	static int c;
	const int d = 10;							// ���ȭ�� �ʱ�ȭ
	char arr[20] = "Hi";

	func();
	printf("func2(): %p\n", func2);			// code segment
	printf("local b: %p\n", &b);
	printf("static c: %p\n", &c);
	printf("const d: %p\n", &d);
	printf("array: %p\n", &arr);
	printf("global a: %p\n", &a);
	printf("global c: %p\n", &global_c);

	return 0;
}

/*
	data segment: stack(����, �Ű�����), heap(�����), data(����, static, ���ڿ� ���ͷ�)
	code segment: �Լ� �ϳ��� �� �� �Ҵ�
*/