#include <iostream>
using namespace std;

int main()
{
	char userCh;

	cout << "Please enter a character:" << endl;
	cin >> userCh;

	if (userCh >= 'a' && userCh <= 'z')
		cout << userCh << " is a lower case letter" << endl;
	else if (userCh >= 'A' && userCh <= 'Z')
		cout << userCh << " is a upper case letter" << endl;
	else if (userCh >= '0' && userCh <= '9') // '0' 을 넣어야 ASCII Code로 변환이 되고, 그냥 0을 넣으면 실제 0이 아님
		cout << userCh << " is a digit" << endl;
	else
		cout << userCh << " is not a aplha-numeric character" << endl;

	return 0;
}