#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n;
	int checkBinary;

	cout << "Enter decimal number:" << endl;
	cin >> n;

	cout << "The binary representation of " << n << " is ";

	int count = 0;

	checkBinary = n;
	while (checkBinary > 1)
	{
		checkBinary = checkBinary / 2;
		count++;
	}
	
	while (count >= 0)
	{
		if (n >= (pow(2, count)))
		{
			n = n - (pow(2, count));
			cout << '1';
			count--;
		}
		else
		{
			cout << '0';
			count--;
		}
	}
	

	return 0;
}
