//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char name[10];
//	int age;
//public:
//	Person() {}		
//	Person(const char* name, int age) {		
//		strncpy(this->name, name, strlen(name) + 1);		
//		this->age = age;
//		printf("Constructor ȣ��!!");
//	}
//	Person(const Person& other) {
//		strcpy(name, other.name);
//		age = other.age;
//		printf("Copy constructor ȣ��!!");
//	}
//	~Person() {}
//	void view()
//	{
//		printf("name: %s, age: %d\n", this->name, this->age);
//	}
//};
//
//int main()
//{
//	char c[4] = "abc";
//	//c[0] = 'a'
//	//c[1] = 'b';
//	//c[2] = 'c';
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
//	return 0;
//}