//struct
#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

int main() {	
	
	// 1. struct 선언하기 
	printf("1. struct 선언하기\n");
	typedef struct { int x, y; } Point; // == struct Point {int x,y;}; 이거가 더 짧기도 하고 직관적임

	Point p; // == struct { int x, y; } p;

	p.x = 3;
	p.y = 4;

	printf("(%d, %d)\n", p.x, p.y);
	printf("\n");

	// 이런식으로 multi로 정의할 수도 있다
	struct Point2 {
		int x;
		int y;
		char c;
		double d;
	};


	//2. 위에 정의한 product 구조체 관련 예제
	printf("2. 위에 정의한 product 구조체 관련 예제\n");
	ProductInfo myProduct = { 111111, "제주 한라봉", 19900 }; // 각각 myProduct.xx 로 초기화해도 되는데, 모아서도 가능

	printf("상품 번호: %d\n", myProduct.num);		//값
	//printf("상품 번호: %d\n", &myProduct.num);		//주소
	
	printf("상품명: %s\n", myProduct.name);			//값
	//printf("상품명: %d\n", myProduct.name);		//주소, 이경우 배열이기때문에 &를 붙일 필요는 없고, %s를 %d로만 변경

	printf("가격: %d\n", myProduct.cost);			//값
	//printf("가격: %d\n", &myProduct.cost);			//주소
	printf("\n");


	// 3. 구조체 포인터, 구조체 안의 변수를 부를때 *괄호 넣고 .변수명을 해도 되지만, 구조체 큰 변수 -> 세부 변수명으로 호출도 가능   
	printf("3. 구조체 포인터\n");
	ProductInfo myProject{ 111111, "제주 한라봉", 19900 };

	ProductInfo* ptr_product = &myProject;

	printf("상품 번호: %d\n", myProject.num);
	printf("상품명: %s\n", myProject.name);
	printf("가격: %d\n", myProject.cost);
	printf("\n");

	printf("상품 번호: %d\n", (*ptr_product).num);
	printf("상품명: %s\n", (*ptr_product).name);
	printf("가격: %d\n", (*ptr_product).cost);
	printf("\n");

	// 
	printf("상품 번호: %d\n", ptr_product->num);
	printf("상품명: %s\n", ptr_product->name);
	printf("가격: %d\n", ptr_product->cost);


	return 0;
}