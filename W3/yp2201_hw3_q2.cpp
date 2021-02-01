#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int g_year = 0;
	int c_year = 0;

	cout << "Please enter your name: ";
	cin >> name;

	cout << "Please enter your graduation year: ";
	cin >> g_year;

	cout << "Please enter current year: ";
	cin >> c_year;

	if (g_year == c_year)
		cout << name << ", you are a Graduated" << endl;
	else if ((g_year - c_year) == 1)
		cout << name << ", you are a Senior" << endl;
	else if ((g_year - c_year) == 2)
		cout << name << ", you are a Junior" << endl;
	else if ((g_year - c_year) == 3)
		cout << name << ", you are a Sophomore" << endl;
	else if ((g_year - c_year) == 4)
		cout << name << ", you are a Freshman" << endl;
	else if ((g_year - c_year) > 4)
		cout << name << ", you are not in college yet" << endl;
	else
		cout << name << ", you are unidentified" << endl;

	return 0;
}