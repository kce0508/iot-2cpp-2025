#include <iostream>

class Myclass {
private:				// 접근제한 지시자
	int id;
	char name[20];
	int age;
public:
	Myclass(int id, char name[20], int age) {
		this->id = id;		// this.id는 잘못된 표현이다.
		this->age = age;	
		strcpy(this->name, name);	// 배열을 선언한 후 문자열을 저장하는 경우는 대입연산자 처리로 할 수 없다.
		//this->name = name;		// 초기화 문법오류!
		//this->name = "홍길동";	// 초기화 문법오류!
	}
};
int main()
{
	return 0;
}