#include <iostream>
using namespace std;

class MyClass {
public:
	MyClass() {
		cout << "생성자가 호출되었음!!" << endl;
	}

	~MyClass() {
		cout << "소멸자가 호출되었음!!" << endl;
	}
};

//MyClass globalObj; //class가 전역변수인 경우 선언하는 순간 생성자가 호출되고, main함수까지 다 돈다음에 소멸자가 호출됨

void testLocalObj() {
	cout << "testLocalObj함수 시작" << endl;
	MyClass localObj; //이거는 생성자가 "test함수 시작" 이후에 생기고, test함수가 끝나면("test함수 끝") 이후에 소멸자가 호출됨 
	cout << "testLocalObj함수 끝" << endl;

}

int main()
{
	cout << "main함수 시작" << endl;
	testLocalObj();
	cout << "main함수 끝" << endl;


	return 0;
}