//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	char* mname;
//	int age;
//
//public:
//	Person() {}
//	Person(const char* name, int age) {
//		mname = new char[strlen(name) + 1];
//		strncpy(mname, name, strlen(name) + 1);
//		this->age = age;
//		printf("Constructor ȣ��!!");
//	}
//	Person(const Person& other) {
//		mname = new char[strlen(mname) + 1];
//		strcpy(mname, other.mname);
//		age = other.age;
//		printf("Copy constructor ȣ��!!");
//	}
//	~Person() {}
//	void view()
//	{
//		printf("name: %s, age: %d\n", this->mname, this->age);
//	}
//};
//
//int main()
//{
//	char c[4] = "abc";
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