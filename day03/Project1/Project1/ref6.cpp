//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int indata = 0;
//	cout << "input ";
//	cin >> indata;				// ����� �Է°��� indata ������ ����
//
//	//indata += 100;
//	//int& ref = indata + 100;	// �ڵ� ����! ref�� l-value �����ε�, �������� r-value (�ӽð�) -> ������ ����
//	//const int& ref = indata + 100;	// �̰� ����, ����� �����Ѵ�.(�ӽð��� const�� �����ؼ� �����ϰ� �� �� �ֱ� ����)
//	int&& ref = indata + 100;	// r-value ����(����� �ӽð�ü�� �����Ҷ� ����)
//
//	cout << ref << endl;
//
//	return 0;
//}
