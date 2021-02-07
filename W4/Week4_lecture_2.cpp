#include <iostream>
using namespace std;

int main()
{
	int n;
	int linenumber;
	int starCount;
	int spaceCount;
	
	cout << "Please enter a positive integer: " << endl;
	cin >> n;

	cout << "Square" << endl;
	for (linenumber = 1; linenumber <= n; linenumber++)
	{
		//print a sequence of n stars
		for (starCount = 1; starCount <= n; starCount++)
			cout <<"*";
		
		//break the line
		cout << endl;
	}

	cout << endl << "Right triangle aligned to the left" << endl;
	for (linenumber = 1; linenumber <= n; linenumber++)
	{
		//print a sequence of lineNumber stars
		for (starCount = 1; starCount <= linenumber; starCount++)
			cout << "*";

		//break the line
		cout << endl;
	}

	cout << endl << "Right triangle aligned to the right" << endl;
	for (linenumber = 1; linenumber <= n; linenumber++)
	{
		//print a sequence of (n - lineNumber) stars
		for (spaceCount = 1; spaceCount <= n - linenumber; spaceCount++)
			cout << " ";
		//print a sequence of lineNumber stars
		for (starCount = 1; starCount <= linenumber; starCount++)
			cout << "*";

		//break the line
		cout << endl;
	}



	return 0;
}