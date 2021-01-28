#include <iostream>
#include <string>
using namespace std;


int main()
{
	int hour24, hour12, minutes24 = 0;
	char temp; //입력시에만 :를 받아야 하니 사용, 실제 출력문에 안 써도 되긴함
	string period;

	cout << "Please enter a time in a 24-hour format:" << endl;
	cin >> hour24 >> temp >> minutes24;

	if (hour24 >= 0 && hour24 <= 11)
	{
		period = "am";
		if (hour24 == 0)
			hour12 = 12;
		else
			hour12 = hour24;
	}
	else
	{
		period = "pm";
		if (hour24 == 12)
			hour12 = 12;
		else
			hour12 = hour24 - 12;
	}

	cout << hour24 << temp << minutes24 << " is " << hour12 << temp << minutes24 << period << endl;
	// 08분은 8로 나오는데, 0을 포함하는 2자리 정수로 표현하는 방법을 찾아봐야 함

	return 0;
}