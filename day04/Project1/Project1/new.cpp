#include <iostream>

int main()
{
	int size;
	int* arr;
	int* arr2;

	std::cout << "배열크기: ";
	std::cin >> size;

	arr = new int;
	arr2 = new int[size];

	delete arr;
	delete[] arr2;

	return 0;
}