// 멤버변수 초기화
#include <iostream>

//1. 생성자 초기화
class Myclass {
	int a;
public:
	Myclass(int _a) { a = _a; }
};

//2. 초기화 리스트
class Myclass1 {
	int a;
public:
	Myclass1(int _a) : a(_a) {

	}
};
// C++11 이후(in-class 초기화: 클래스 멤버변수에 클래스 정의 내부에서 직접 초기값을 지정하는 것)
class MyClass2 {
	int x = 10;		// 선언과 동시에 초기화
};
// static 초기화 - 클래스 외부에서 초기화를 한다.
class MyClass3 {
	static int count;
};
int MyClass3::count = 0;

class MyClass4 {
	const int id = 10;
public:
	MyClass4(int _id) : id(_id) {}
};

int main()
{

	return 0;
}