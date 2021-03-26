//종합문제
//1. 다음 프로그램의 출력 결과는?

//#include <stdio.h>
//
//typedef int Point[2];
//typedef Point* PointPtr;
//
//int main() {
//	Point p = { 3, 4 }; //int p[2] = {3, 4}
//	PointPtr pp = &p;   //Point *pp = &p
//	
//	//**pp == *(*pp) == *(*(&p)) == *p == p[0], (*pp)[0] == p[0], (*pp)[1] == p[1], 
//	printf("%d %d %d\n", **pp, (*pp)[0], (*pp)[1]); 
//}

////2. 빈칸에 들어갈 코드는?
//
//#include <stdio.h>
//
//struct Point {
//	int x, y;
//};
//
//void pSwap(Point* p) {
//	int tmp = (*p).x; // == p->x, 포인터 한정으로 ->로 부른다 
//	(*p).x = (*p).y;
//	(*p).y = tmp;
//}
//
//int main() {
//	Point pos = { 3, 4 };
//
//	pSwap(&pos);
//
//	printf("(%d, %d)\n", pos.x, pos.y);
//
//}

//3. 코드에서 pSwap 함수를 Point 구조체에 집어넣어 보세요 

#include <stdio.h>

struct Point {
	int x, y;

	//구조체 안에 넣는다, 이 경우 매개변수도 필요없고, 포인터 지정도 필요가 없다. 
	void pSwap() {
		int tmp = x; 
		x = y;
		y = tmp;
	}
};

int main() {
	Point pos = { 3, 4 };

	//매개변수로 함수 왔다갔다 하는게 아니라, 그냥 구조체 안에있는 함수변수를 .변수명으로 호출하면 된다. 
	pos.pSwap();

	printf("(%d, %d)\n", pos.x, pos.y);

}
