// Call by Value vs Call by Reference

#include <iostream>
using namespace std;

void swap1(int a, int b);
void swap2(int& a, int& b);

int main()
{
	int a = 3, b = 4;
	cout << "Call by Value" << endl;
	cout << "Before: a = " << a << " b = " << b << endl;
	swap1(a, b);
	cout << "after: a = " << a << " b = " << b << endl;
	cout << endl;

	cout << "Call by Value" << endl;
	cout << "Before: a = " << a << " b = " << b << endl;
	swap2(a, b);
	cout << "after: a = " << a << " b = " << b << endl;

	return 0;
}

//Call by Value, 리턴값이 없다면 main함수에는 영향이 없음, 입력값을 돌려받으려면 &로 걸어야 함. 
void swap1(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//Call by Reference, &a의 경우 위치에 해당하는 값을 변경해버렸기 때문에 main함수도 바뀜
void swap2(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

