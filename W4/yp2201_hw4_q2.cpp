#include <iostream>
using namespace std;

int main()
{
	int decimalNum;
	const int M = 1000;
	const int D = 500;
	const int C = 100;
	const int L = 50;
	const int X = 10;
	const int V = 5;
	const int I = 1;

	cout << "Enter decimal number:" << endl;
	cin >> decimalNum;
	cout << decimalNum << " is ";

	while (decimalNum >= M)
	{
		cout << "M";
		decimalNum = decimalNum - M;
	}
		
	while (decimalNum >= D)
	{
		cout << "D";
		decimalNum = decimalNum - D;
	}
	
	while (decimalNum >= C)
	{
		cout << "C";
		decimalNum = decimalNum - C;
	}

	while (decimalNum >= L)
	{
		cout << "L";
		decimalNum = decimalNum - L;
	}

	while (decimalNum >= X)
	{
		cout << "X";
		decimalNum = decimalNum - X;
	}

	while (decimalNum >= V)
	{
		cout << "V";
		decimalNum = decimalNum - V;
	}

	while (decimalNum >= I)
	{
		cout << "I";
		decimalNum = decimalNum - I;
	}

	return 0;
}