#include <iostream>

class Myclass {
private:
	int id = 10;
	char name[20];
	int age;
public:
	Myclass(int id, char name[20], int age) {
		this->id = id;					// this.id�� �߸��� ǥ���̴�.
		this->age = age;
		strcpy(this->name, name);
		// this->name = name;
		// this->name = "ȫ�浿";
	}
};

int main()
{
}