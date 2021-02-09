#include <iostream>
#include <cmath>
using namespace std;



void decToBin(int n) 
{
	if (n == 0) 
	{
		return;
	}
	decToBin(n / 2);
	cout << n % 2;
}

int main()
{
	int n;
	
	cout << "Enter decimal number:" << endl;
	cin >> n;

	cout << "The binary representation of " << n << " is ";
	decToBin(n);
	cout << endl;

	return 0;
} 