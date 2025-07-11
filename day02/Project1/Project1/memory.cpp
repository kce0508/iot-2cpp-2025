#include <stdio.h>

int a;
const int global_c = 100;

void func() {
	printf("function: %p\n", func);			// 함수의 이름 = 주소 = 배열
}

int func2() {
	return 1;
}

int main()
{
	int b = 100;									// b
	static int c;
	const int d = 10;							// 상수화는 초기화
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
	data segment: stack(지역, 매개변수), heap(사용자), data(전역, static, 문자열 리터럴)
	code segment: 함수 하나당 한 개 할당
*/