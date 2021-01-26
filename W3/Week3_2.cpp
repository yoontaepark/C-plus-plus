#include <iostream>
using namespace std;

int main()
{
	/* if 문 ()에는 boolean 표현만 들어가도록 주의
	(c++은 아니어도 되긴하는데, 의도한거처럼 안나올 수 있다)
	int val = 0;

	if (val = 0)
		cout << "val is 0" << endl;
	else
		cout << "val is not 0" << endl;*/

	int userInput = 0;

	cout << "Please enter an integer:" << endl;
	cin >> userInput;
	
	if (userInput % 2 == 0)
		cout << userInput << " is even" << endl;
	else
		cout << userInput << " is odd" << endl;

	return 0;
}