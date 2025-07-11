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
//		printf("Constructor 호출!!");
//	}
//	Person(const Person& other) {
//		strcpy(name, other.name);
//		age = other.age;
//		printf("Copy constructor 호출!!");
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
//	Person p("홍길동", 50);
//	p.view();
//
//	Person p2(p);	// 복사생성자 호출
//	p2.view();
//
//	Person p3 = p;	// 복사생성자 호출
//	p3.view();
//
//	return 0;
//}