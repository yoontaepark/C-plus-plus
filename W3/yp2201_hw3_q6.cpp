#include <iostream>
#include <string>
using namespace std;


int main()
{
	string day_of_week;
	int start_hour = 0;
	char temp;
	int start_min = 0;
	int length_min = 0;
	int start_in_min = 0;
	double cost_of_call = 0;

	cout << "Please enter the day of the week: ";
	cin >> day_of_week;
	cout << "Please enter the time the call started: ";
	cin >> start_hour >> temp >> start_min;
	cout << "Please enter the length of the call in minutes: ";
	cin >> length_min;

	if ((day_of_week == "Sa") && (day_of_week == "Su"))
	{
		cost_of_call = 0.15 * length_min;
		cout << "The cost of the call is " << cost_of_call << endl;
	}
	else
		if ((start_hour >= 8) && (start_hour <= 18))
		{
			cost_of_call = 0.40 * length_min;
			cout << fixed;
			cout.precision(2); //to make total price xx.xx
			cout << "The cost of the call is $" << cost_of_call << endl;
		}
		else
		{
			cost_of_call = 0.25 * length_min;
			cout << fixed;
			cout.precision(2); //to make total price xx.xx
			cout << "The cost of the call is $" << cost_of_call << endl;
		}
	return 0;
}