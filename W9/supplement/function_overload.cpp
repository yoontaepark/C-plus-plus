#include <iostream>
#include <string>
using namespace std;

// 함수 overload


//1. 함수를 똑같은걸 쓰면서 변수 type만 바꾸면 중복처리가 안되고 각각 쓸수도 있다. 
//&레퍼런스를 이용한 기본형태
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

//형만 double로 바뀜, 나머진 동일
void swapd(double& a, double& b) {
	double tmp = a;
	a = b;
	b = tmp;
}

//포인터 변수를 매개변수로 받는 case
void swapp(int* (&a), int* (&b)) { //main에 변수가 주소값이라 주소값을 받는 포인터 변수다 라고 선언한 꼴
								   //그냥 *만 쓰고 싶으면, 애시당초 넘길 변수를 &a 로 선언하면 된다 
	int* tmp = a;
	a = b;
	b = tmp;
}

void swapp2(int*a, int*b) { //main에 변수가 주소값이라 주소값을 받는 포인터 변수다 라고 선언한 꼴
								   //그냥 *만 쓰고 싶으면, 애시당초 넘길 변수를 &a 로 선언하면 된다 
	int* tmp = a;
	a = b;
	b = tmp;
}

int inventory[64] = { 0 };
int score = 0;

//2. 함수를 똑같은걸 쓰면서 매개변수 갯수를 다르게 하면 중복처리가 안되고 각각 쓸수도 있다. 
// 이게 오버로드 개념임
void getitem(int itemId) {
	inventory[itemId]++;
}

void getitem(int itemId, int cnt) {
	inventory[itemId] += cnt;
}

void getitem(int itemId, int cnt, int sc) {
	inventory[itemId] += cnt;
	score += sc;
}

// 값이 들어올지/안들어올지 모르는 애들은 매개변수를 초기화 함으로써 함수를 사용할 수도 있다. 
// 다만, default 매개변수 지정은 오른쪽에서부터 시작함  
void getitem2(int itemId, int cnt = 1, int sc = 0) {
	inventory[itemId] += cnt;
	score += sc;
}





int main() {
	
	// String 관련된 간단한 활용
	//string name;

	//cout << "이름 입력: ";
	//cin >> name;

	//string message = "안녕하세요, " + name + "님. ";
	//cout << message << endl;

	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	int* pa = &a, * pb = &b;

	swap(a, b);
	swapd(da, db); 
	swapp(pa, pb);
	swapp2(&a, &b);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	
	std::cout << "da: " << da << std::endl;
	std::cout << "db: " << db << std::endl;

	std::cout << "*pa: " << *pa << std::endl;
	std::cout << "*pb: " << *pb << std::endl;	
	

	getitem(6, 5);
	getitem(3, 2);
	getitem(3);
	getitem(11, 34, 7000);
	getitem2(10);
	getitem2(10, 9);
	getitem2(10, 9, 5000);

	cout << score << endl;
	for (int i = 0; i < 16; i++)
		cout << inventory[i] << ' ';
	cout << endl;
	

	return 0;
}