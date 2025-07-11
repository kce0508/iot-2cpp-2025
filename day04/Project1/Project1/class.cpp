#include <iostream>

class Myclass {
private:
	int id = 10;
	char name[20];
	int age;
public:
	Myclass(int id, char name[20], int age) {
		this->id = id;					// this.id는 잘못된 표현이다.
		this->age = age;
		strcpy(this->name, name);
		// this->name = name;
		// this->name = "홍길동";
	}
};

int main()
{
}