// ������� �ʱ�ȭ
#include <iostream>

//1. ������ �ʱ�ȭ
class Myclass {
	int a;
public:
	Myclass(int _a) { a = _a; }
};

//2. �ʱ�ȭ ����Ʈ
class Myclass1 {
	int a;
public:
	Myclass1(int _a) : a(_a) {

	}
};
// C++11 ����(in-class �ʱ�ȭ: Ŭ���� ��������� Ŭ���� ���� ���ο��� ���� �ʱⰪ�� �����ϴ� ��)
class MyClass2 {
	int x = 10;		// ����� ���ÿ� �ʱ�ȭ
};
// static �ʱ�ȭ - Ŭ���� �ܺο��� �ʱ�ȭ�� �Ѵ�.
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