#include <stdio.h>

//Macro: define 함수를 사용한다.
#define MAX(A,B) (((A) > (B)) ? (A): (B))

int max(int a, int b) {
	/*if (a > b) return a;
	return b;*/

	//★조건문 간단하게 쓰는 방법!!!
	return (a > b) ? a : b; // 조건문 ? 참이라면 : 거짓이라면 
}

int main() {

	printf("%d\n", max(3, 4));
	printf("%d", MAX(3, 4));

	return 0;
}
