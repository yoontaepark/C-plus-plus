#include <iostream>
using namespace std;

int main()
{
	
	char lowerCaseLetter, upperCaseLetter;
	int offset;

	cout << "Please enter a lower case letter:" << endl;
	cin >> lowerCaseLetter;

	offset = (int)(lowerCaseLetter - 'a'); //char 끼리 사칙연산이 가능하고, 이를 정수로 치환
	upperCaseLetter = (char)('A' + offset);

	cout << "The upper case of " << lowerCaseLetter << " is " << upperCaseLetter;	

	return 0;
}