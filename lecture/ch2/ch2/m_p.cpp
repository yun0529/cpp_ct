///*
//* 메모리는 각각 작은 크기에 해당하는 메모리셀로 구성됨
//* 메모리셀은 각각의 주소를 가짐
//* int i -> 4바이트 정수 선언하면 해당 변수가 메모리에 저장됨
//* 그럼 1byte 메모리셀 4개를 예약함 -> 값 할당 하면 저장됨
//* int i 의 주소는 사용하는 메모리셀 중 첫 번째 주소를 가리킴
//* 메모리주소는 OS 실행시간 등등... 에 따라 달라짐
//*/
//
//#include <iostream>
//using namespace std;
//
//int i;
//
//int main(void) {
//
//	cout << &i << '\n';
//	i = 0;
//	cout << &i << '\n';
//
//	return 0;
//}