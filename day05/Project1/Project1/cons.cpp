//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//
//class Person {
//	char name[10];
//	int age;
//	std::string name;
//public:
//	Person(){}		// �⺻������, �Ű����� ���� ��ü ������ �� �ʿ�
//	Person(const char* name, int age) {		// ������ �����ε�: �Ű������� �޾Ƽ� ��ü �ʱ�ȭ
//		strcpy(this->name, name);			// ���޹��� �̸� �����ؼ� ����
//		//this->name = name;				// ���ڿ��� �̷��� �Ϲ� �ȵȴ�.
//		this->age = age;
//		printf("Constructor ȣ��!!");
//	}
//	~Person(){}
//	void view()
//	{
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main() 
//{
//	//Person p;		// �⺻ �����ڸ� �̿��� ��ü ����, ���� Person(){}������ ������ ������
//	//p.view();
//
//	Person p("ȫ�浿", 50);
//	p.view();
//
//	Person p2(p);	// ��������� ȣ��
//	p2.view();
//
//	Person p3 = p;	// ��������� ȣ��
//	p3.view();
//
//
//	return 0;
//}