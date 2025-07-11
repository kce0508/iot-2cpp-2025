#include <stdio.h>

void func();			// 함수선언
void func1();

int main(int arg, char** argv)
{
	char ch = 'a';
	int num = 10;
	func();				// 함수호출
	func1(ch);
	func2(num);

	return 0;

}
void func()				// 함수 정의. 함수머리: 출력 함수이름(입력)
{
	printf("Hello\n");
}
void func1(char arg)		// 입력 O, arg = 'a'
{
	printf("%c Hello\n", arg);
}
int func2(int n)	// 출력있고, 입력있다.
{
	return 0;
}

// 함수의 정의, 함수의 호출, 함수의 선언