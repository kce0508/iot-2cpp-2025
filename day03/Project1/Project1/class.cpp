#include <iostream>

class Myclass {
private:				// �������� ������
	int id;
	char name[20];
	int age;
public:
	Myclass(int id, char name[20], int age) {
		this->id = id;		// this.id�� �߸��� ǥ���̴�.
		this->age = age;	
		strcpy(this->name, name);	// �迭�� ������ �� ���ڿ��� �����ϴ� ���� ���Կ����� ó���� �� �� ����.
		//this->name = name;		// �ʱ�ȭ ��������!
		//this->name = "ȫ�浿";	// �ʱ�ȭ ��������!
	}
};
int main()
{
	return 0;
}