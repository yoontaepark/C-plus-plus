//struct 추가예제
#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

//구조체를 함수로 받으면서 reference로 돌려받으려면, 포인터 사용하면 됨 
void productSale(ProductInfo* p, int percent) {
	p->cost -= p->cost * percent / 100;
}

void productSwap(ProductInfo* a, ProductInfo* b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a;

	printf("추가 1) 구조체 포인터\n");
	ProductInfo myProduct{ 111111, "제주 한라봉", 20000 };
	ProductInfo otherProduct{ 222222, "서울 그냥귤", 100000 };


	//함수에 포인터 매개변수를 받으려면, 주소값을 넣어야 함
	productSale(&otherProduct, 10);

	//사실 struct 쓰는거 말고는 똑같음, 구조체로 정의된 변수를 int자리에 넣는다고 생각하면 됨. 
	productSwap(&myProduct, &otherProduct);

	printf("상품 번호: %d\n", myProduct.num);
	printf("상품명: %s\n", myProduct.name);
	printf("가격: %d\n", myProduct.cost);
	printf("\n");


	return 0;
}