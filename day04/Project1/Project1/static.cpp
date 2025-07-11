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
	//a = 8;						// �Ϲ� ��� ������ static �Լ��ȿ��� �����ϸ� �� ��. static �Լ����� static ���� ���� ����
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
	// -> static ��� �Լ��� ���� �� �� ����

	obj.print();

	MyClass obj2;
	obj2.print();

	return 0;
}