#include <iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int add = 0;
	int subtract = 0;
	int multiply = 0;
	double divide = 0;
	int div = 0;
	int mod = 0;

	cout << "Please enter two positive integers, separated by a space:" << endl;
	cin >> num1 >> num2;

	add = num1 + num2;
	subtract = num1 - num2;
	multiply = num1 * num2;
	divide = double(num1) / double(num2); //convert data to decimal point 
	div = num1 / num2;
	mod = num1 % num2;

	cout << num1 << " + " << num2 << " = " << add << endl;
	cout << num1 << " - " << num2 << " = " << subtract << endl;
	cout << num1 << " * " << num2 << " = " << multiply << endl;
	cout << num1 << " / " << num2 << " = " << divide << endl;
	cout << num1 << " div " << num2 << " = " << div << endl;
	cout << num1 << " mod " << num2 << " = " << mod << endl;

	return 0;
}

