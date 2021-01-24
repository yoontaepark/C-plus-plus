#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	double total = 0;
	int dollars = 0;
	double cents = 0;

	cout << "Please enter number of coins:" << endl;
	cout << "# of quarters: ";
	cin >> num1;
	cout << "# of dimes: ";
	cin >> num2;
	cout << "# of nickels: ";
	cin >> num3;
	cout << "# of pennies: ";
	cin >> num4;

	// total amt would be x.xx dollars, so *100 for cents. (Integer for both is needed)
	total = (num1 * 0.25) + (num2 * 0.1) + (num3 * 0.05) + (num4 * 0.01);
	dollars = total / 1;
	cents = (total - dollars) * 100;

	cout << "The total is "<<dollars<<" dollars and "<<cents<<" cents" << endl;

	return 0;
}