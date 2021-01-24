#include <iostream>
using namespace std;

int main()
{
	char inputChar;
	int asciiValue;

	cout << "Please enter a character:" << endl;
	cin >> inputChar;

	asciiValue = (int)inputChar; //no data would be lost (which means (int) is not needed), but use it to visualize transfering data type

	cout << "The ASCII value of " << inputChar << " is " << asciiValue;

	return 0;
}