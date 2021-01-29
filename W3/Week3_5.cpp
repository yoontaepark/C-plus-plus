#include <iostream>
using namespace std;


//Switch, if, if else, else와 기능 유사하며, if 구문이 더 범용성이 큼
int main()
{

	double arg1 = 0;
	double arg2 = 0;
	double res = 0;
	char op;

	cout << "Please enter an expression of the form arg1 op arg2:" << endl;
	cin >> arg1 >> op >> arg2;

	switch(op)
	{
		case '+':
			res = arg1 + arg2;
			cout << res << endl;
			break;
		case '-':
			res = arg1 - arg2;
			cout << res << endl;
			break;
		case '*':
			res = arg1 * arg2;
			cout << res << endl;
			break;
		case '/':
			if (arg2 != 0)
			{
				res = arg1 / arg2;
				cout << res << endl;
			}
			else
				cout << "Ileagal expression" << endl;
			break;
		default:  //안쓰고 위의 case에 해당하지 않는 경우 그냥 출력을 안해버림(에러출력하는게 아님)
			cout << "Ileagal expression" << endl;
			break;
	}

	return 0;
}