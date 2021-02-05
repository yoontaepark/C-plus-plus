#include <iostream>
using namespace std;

int main()
{
	bool seenEndOfInput;
	int sum, numOfstudents;
	int curr;
	double average;

	cout << "Enter the grades seperated by a space" << endl;
	cout << "End the sequence by typing -1" << endl;

	sum = 0;
	numOfstudents = 0;

	//-1을 인지해서 go/stop을 분기할 boolean을 만들어준다
	seenEndOfInput = false;

	// -1까지 가기전에 몇번 입력할지를 모르겠다. (for 혹은 while 중에, while을 사용한다) 
	// for: 반복할 횟수를 알때, while: 반복할 횟수를 모를때, + for을 포괄하는 개념
	// seenEndofInput에 -1을 넣을 때까지 curr 값을 받고 sum하면서 conut도 올린다
	while (seenEndOfInput == false)
	{
		cin >> curr;
		if (curr == -1)
		{
			seenEndOfInput = true;
		}
		else
		{
			sum += curr;
			numOfstudents++;
		}
	}

	average = (double)sum / (double)numOfstudents;

	cout << "The class average is " << average << endl;

	return 0;
}