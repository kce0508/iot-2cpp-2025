//// 함수의 다형성
//#include <iostream>
//using namespace std;
//
////int add(int a, int b) 
////{
////	return a + b;
////}
////
////double add(double a, double b)
////{
////	return a + b;
////}
//
//// 함수 템플릿 - 함수당 중정의 보다는 템플릿으로
//template <typename T>	// T는 타입 매개변수(int, double, float 등 어떤 타입도 가능)
//T add(T a, T b)
//{
//	return a + b;
//}
//
//int main()
//{
//	cout << add(3, 4) << endl;
//	cout << add(3.3, 4.4) << endl;
//
//	return 0;
//}