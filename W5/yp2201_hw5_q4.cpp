#include <iostream>
using namespace std;


void printDivisors(int num);

int main()
{
	int num;

	cout << "Please enter a positive integer >=2: ";
	cin >> num;
	printDivisors(num);
	cout << endl;

	return 0;
}

void printDivisors(int num)
{
	int output;

	if (num < 2)
		cout << "It is an error!!" << endl;
	else
	{
		for (int i = 1; i < sqrt(num); i++)  
		{
			if (num % i == 0)
			{
				output = i;
				cout << output << " ";
			}
		}

		for (int j = sqrt(num); j > 0; j--) 
		{
			if (num % j == 0)
			{
				output = num / j;
				cout << output << " ";
			}
		}
	}
}
