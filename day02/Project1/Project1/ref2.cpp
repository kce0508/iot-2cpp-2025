#include <iostream>

void change_val(int& p) {
	p = 20;
}

int main()
{
	int num = 10;
	std::cout << num << std::endl;
	change_val(num);
	std::cout << num << std::endl;

	return 0;
}

/*
	int n;
	int* pn;
	int& rn;				// 레퍼런스 변수(별칭, 별칭)

	(lvalue: 변수) int n = 10 (rvalue: 리터럴, 변수);
	n = n2;
	10 = n2; X
*/