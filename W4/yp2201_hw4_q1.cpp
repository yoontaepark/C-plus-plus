#include <iostream>
using namespace std;

int main()
{
	int n;
	int firstEven;
	int evenNum;

	cout << "section a" << endl;
	cout << "Please enter a positive integer: ";
	cin >> n;

	firstEven = 1;

	while (firstEven <= n)
	{
		evenNum = 2 * firstEven;
		cout << evenNum << endl;
		firstEven++;
	}

	cout << endl << "section b" << endl;
	cout << "Please enter a positive integer: ";
	cin >> n;

	for (firstEven = 1; firstEven <= n; firstEven++)
	{
		evenNum = 2 * firstEven;
		cout << evenNum << endl;
	}

	return 0;
}