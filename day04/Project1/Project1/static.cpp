#include <iostream>

class MyClass {
private:
	int a = 10;
	static int static_a;
public:
	MyClass();
	void print();
	static void set_static_a(int _a);
};

int MyClass::static_a = 100;

MyClass::MyClass() { a = 20; }

void MyClass::set_static_a(int _a) {
	static_a = _a;
	//a = 8;						// 일반 멤버 변수는 static 함수안에서 선언하면 안 됨. static 함수에는 static 변수 선언 가능
}

void MyClass::print() {
	std::cout << a << ", " << static_a << std::endl;
}

int main()
{
	MyClass obj;

	obj.print();

	//obj.static_a = 50;
	//obj.a = 77;
	// -> static 멤버 함수를 생성 후 값 변경

	obj.print();

	MyClass obj2;
	obj2.print();

	return 0;
}