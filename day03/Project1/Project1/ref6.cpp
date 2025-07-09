//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int indata = 0;
//	cout << "input ";
//	cin >> indata;				// 사용자 입력값을 indata 변수에 저장
//
//	//indata += 100;
//	//int& ref = indata + 100;	// 코드 오류! ref는 l-value 참조인데, 오른쪽은 r-value (임시값) -> 컴파일 에러
//	//const int& ref = indata + 100;	// 이건 가능, 상수를 참조한다.(임시값을 const로 고정해서 안전하게 쓸 수 있기 때문)
//	int&& ref = indata + 100;	// r-value 참조(상수나 임시객체를 참조할때 쓴다)
//
//	cout << ref << endl;
//
//	return 0;
//}
