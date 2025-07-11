#include <iostream>

void change_val(int* p) {
	*p = 20;
}

int main()
{
	int num = 10;
	std::cout << num << std::endl;
	change_val(&num);
	std::cout << num << std::endl;

	return 0;
}