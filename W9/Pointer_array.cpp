#include <stdio.h>

// 포인터, 배열, call by value/reference 정리

//1. Call by value, main함수에 영향 없음
void swap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

//2. Call by reference, 매개변수에 &를 넣기만 한다. 
// C++에서 제공하는 기능, 매개변수에 주소를 받아서 바꿔준다~ 라고 생각하기
void swap2(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}

//3. 포인터를 매개변수로 넘기기, 포인터변수로 받아야하니, 변수로는 &(주소값)을 넣어야 한다. call by reference가 됨 
// 전통적인 C언어 방식(안쓴다는게 아님) 
void swap3(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

//4. 배열을 매개변수로 넘기기, 걍 배열 == 포인터라고 생각하면 편함, 배열에 포인터를 굳이 달고 싶으면 [] 배열 표현을 빼면 된다. 
void printArr(int arr[]) {  //arr[] == *arr 혼용가능 
	for (int i = 0; i < 4; i++)
		arr[i] *= 2;
}


int main() {
	
	int a = 2, b = 3;
	swap(a, b);
	printf("a = %d, b= %d\n", a, b);

	int c = 2, d = 3;
	swap2(c, d);
	printf("a = %d, b= %d\n", c, d);

	int e = 2, f = 3;
	swap3(&e, &f);
	printf("a = %d, b= %d\n", e, f);


	int arr[4] = { 1,2,3,4 };
	printArr(arr);  //arr == &arr[0], 다만 매개변수 넘길때 주소를 넘겨야 맞고, 가장 첫주소를 넘김 

	for (int i = 0; i < 4; i++)
		printf("%d ", arr[i]);

//5. 배열 vs 포인터, 사실상 동치로 갈아끼워도 됨(기능상)
	int brr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	// 5-1. 일반적인 케이스, 배열형태 출력
	for (int i = 0; i < 10; i++)
		printf("%d ", brr[i]);
	printf("\n");

	// 5-2 arr == &arr[0], arr+i == &arr[0+i]니까, *arr면 *&arr[0]임, arr배열 0번째 주소에가서 그 값을 출력해라
	for (int i = 0; i < 10; i++)
		printf("%d ", *(brr+i));
	printf("\n");

	//5-3 *ptr 포인터 변수를 주소값 &brr[0] 초기화, 이후 주소값을 하나씩 올린다. 
	// *ptr = brr 이라는 소리가 ptr 이라는 포인트 변수가 == brr(주소값) 이라는 소리임. 따라서 ptr+1 라는건 brr+1 이고, &brr[1] 을 의미함   
	for (int *ptr = brr; ptr < brr+10; ptr++)
		printf("%d ", *ptr); // ptr 주소값에 해당하는 값!!! 
	printf("\n");


	return 0;

}