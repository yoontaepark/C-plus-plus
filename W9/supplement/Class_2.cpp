//This

#include <iostream>
using namespace std;

class MyClass {
public:
	void printThis() {
		cout << "나의 주소는 " << this << endl;
	}

	//this는 원래 아래처럼 포인터 변수를 매개로 받아서, 주소값을 출력해주는 역할임
	void printPtr(MyClass *ptr) {
		cout << "나의 주소는 " << ptr << endl;
	}

};


int main()
{
	MyClass a, b;

	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	//this 변수를 쓰면 매개변수 안받아도 됨, 정확히는 공란인 매개변수를 받는 개념임
	a.printThis();
	b.printThis();

	//포인터 변수를 매개로 받기 때문에, 주소값을 변수로 보내줘야 함
	a.printPtr(&a);
	b.printPtr(&b);


	return 0;
}