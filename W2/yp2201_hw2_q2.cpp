#include <iostream>
using namespace std;

int main()
{
	int dollars = 0;
	int cents = 0;
	int total = 0;

	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;
	
	cout << "Please enter your amount in the format of dollars and cents separated by a space:" << endl;
	cin >> dollars >> cents;
	cout << dollars << " dollars and " << cents << " cents are:" << endl;

	// Used an alternative method introduced at the week2 lecture. (but can also use % to calculate below)
	total = dollars * 100 + cents;
	quarters = total / 25;
	dimes = (total - (quarters * 25)) / 10;
	nickels = (total - (quarters * 25) - (dimes * 10)) / 5;
	pennies = (total - (quarters * 25) - (dimes * 10) - (nickels * 5)) / 1;

	cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels and " << pennies << " pennies" << endl;

	return 0;
}