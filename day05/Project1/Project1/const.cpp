#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

class Person {
	char name[10];
	int age;
public:
	Person(){}		// 기본생성자, 매개변수 없이 객체 생성할 때 필요
	Person(const char* name, int age) {		// 생성자 오버로딩: 매개변수를 받아서 객체 초기화
		strcpy(this->name, name);			// 전달받은 이름 복사해서 저장
		//this->name = name;				// 문자열은 이렇게 하묜 안된다.
		this->age = age;
		printf("Constructor 호출!!");
	}
	void view()
	{
		printf("name: %s, age: %d\n", this->name, this->age);
	}
};

int main() 
{
	//Person p;		// 기본 생성자를 이용해 객체 생성, 위에 Person(){}없으면 컴파일 오류남
	//p.view();

	Person p("홍길동", 50);
	p.view();

	Person p2(p);	// 복사생성자 호출
	p2.view();

	Person p3 = p;
	p3.view();


	return 0;
}