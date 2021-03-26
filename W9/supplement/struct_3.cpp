#include <stdio.h>

 //Case 1. 구조체 안에 함수 선언
//struct Time {
//	int h, m, s;
//
//	//구조체 안에 함수 선언가능, 이때 구조체 안의 변수를 그대로 사용할 수 있다. 
//	int totalsec() {
//		return 3600 * h + 60 * m + s;
//	}
//};
//
//int main() {
//	Time t = { 1, 22, 48 };
//	
//	//구조체.함수명을 통해 구조체 안의 함수 사용 
//	printf("%d", t.totalsec());
//
//	return 0;
//}


// Case 2. 구조체와 함수를 별도로 선언
//struct Time {
//	int h, m, s;
//};
//
////함수선언시 매개변수에 구조체를 넣고, 함수안에는 구조체의 변수를 바로 못부르니, 구조체.변수명으로 불러야 함
//int totalsec(Time t) {
//	return 3600 * t.h + 60 * t.m + t.s;
//}
//
//int main() {
//	Time t = { 1, 22, 48 };
//
//	//함수 호출시 매개변수를 ()안에 넣는다. 
//	printf("%d", totalsec(t));
//
//	return 0;
//}


// Case 3
struct Point {
	int x, y;

	//구조체 안에 함수 표현시 {}로 묶어주기 
	void moveRight() { x++; }
	void moveLeft() { x--; }
	void moveUp() { y++; }
	void moveDown() { y--; }
};

int main() {
	Point p = { 2,5 };
	p.moveDown();
	p.moveRight();

	printf("(%d, %d)", p.x, p.y);
	
	return 0;
}