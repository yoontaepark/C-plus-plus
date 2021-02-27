#include <iostream>
#include <string>
using namespace std;

int main()
{
	string last_name;
	string first_name;
	string middle_name;

	cin >> first_name >> middle_name >> last_name;
	cout << last_name << ", " << first_name << " " << middle_name[0] << "." << endl;

	return 0;
}