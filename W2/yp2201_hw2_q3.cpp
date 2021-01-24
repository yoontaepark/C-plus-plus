#include <iostream>
using namespace std;

int main()
{
	int days_John = 0;
	int hours_John = 0;
	int minutes_John = 0;

	int days_Bill = 0;
	int hours_Bill = 0;
	int minutes_Bill = 0;

	int total = 0;
	int days = 0;
	int hours = 0;
	int minutes = 0;

	cout << "Please enter the number of days John has worked: ";
	cin >> days_John;
	cout << "Please enter the number of hours John has worked: ";
	cin >> hours_John;
	cout << "Please enter the number of minutes John has worked: ";
	cin >> minutes_John;
	cout << "\n" << endl;

	cout << "Please enter the number of days Bill has worked: ";
	cin >> days_Bill;
	cout << "Please enter the number of hours Bill has worked: ";
	cin >> hours_Bill;
	cout << "Please enter the number of minutes Bill has worked: ";
	cin >> minutes_Bill;
	cout << "\n" << endl;

	// Convert to total minutes and divide into days, hours, and minutes
	total = (days_John * 24 * 60) + (hours_John * 60) + minutes_John + (days_Bill * 24 * 60) + (hours_Bill * 60) + minutes_Bill;
	days = total / (24*60);
	hours = (total - (days * 24 * 60)) / 60;
	minutes = total - (days * 24 * 60) - (hours * 60); 

	cout << "The total time both of them worked together is: " << days << " days, " << hours << " hours and " << minutes << " minutes." << endl;

	return 0;
}