#include <iostream>
using namespace std;

int& func()
{
	int val = 10;
	return val;
}
int main()
{
	int& res = func();			// ���������� �����ϴ� val�� �޸𸮻󿡼� �������.
	cout << res << endl;

	return 0;
}

