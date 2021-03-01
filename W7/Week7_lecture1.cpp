// &var: var의 주소를 나타내는 operator
// *pointer: dereferening(accessing) operator
#include <iostream>
using namespace std;

int main()
{
	int x;
	int* px;

	x = 4;
	px = &x; //이때 px의 자료형은 int*(이미 정의했기도 했지만, 주소값을 받는 자료형은 *이 붙는다)


	//참고로 포인터 크기는 모두 4 바이트임
	cout << x << endl;   // 자료형: int,   크기: 4(64비트로 컴파일하면 8), 값: 4
 	cout << px << endl;  // 자료형: int*,  크기: 4(64비트로 컴파일하면 8), 값: 주소값 0000008D26DCFAE4
	cout << *px << endl; // 자료형: int,   크기: 4(64비트로 컴파일하면 8), 값: 4
	cout << &px << endl; // 자료형: int**, 크기: 4(64비트로 컴파일하면 8), 값: 주소값 0000008D26DCFAE8
	
	*px = 5; // x=5와 동일한 효과
	cout << x << endl;   // 자료형: int,   크기: 4(64비트로 컴파일하면 8), 값: 5
	cout << px << endl;  // 자료형: int*,  크기: 4(64비트로 컴파일하면 8), 값: 주소값 0000008D26DCFAE4
	cout << *px << endl; // 자료형: int,   크기: 4(64비트로 컴파일하면 8), 값: 5


	return 0;
}