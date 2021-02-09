#include <iostream>
using namespace std;

int main()
{

	int n;
	int linenumber;
	int starCount;
	int lspaceCount;
	int rspaceCount;

	cout << "Please enter a positive integer: " << endl;
	cin >> n;

	
	for (linenumber = 1; linenumber <= n; linenumber++)
	{
		//print a sequence of left space
		for (lspaceCount = 1; lspaceCount <= linenumber-1; lspaceCount++)
			cout << " ";
		//print a sequence of lineNumber stars
		for (starCount = 1; starCount <= (2*n - (2*linenumber-1)); starCount++)
			cout << "*";
		//print a sequence of right space
		for (rspaceCount = 1; rspaceCount <= linenumber; rspaceCount++)
			cout << " ";

		cout << endl;
	}

	for (linenumber = 1; linenumber <= n; linenumber++)
	{
		//print a sequence of left space
		for (lspaceCount = 1; lspaceCount <= n- linenumber; lspaceCount++)
			cout << " ";
		//print a sequence of lineNumber stars
		for (starCount = 1; starCount <= (2 * linenumber - 1); starCount++)
			cout << "*";
		//print a sequence of right space
		for (rspaceCount = 1; rspaceCount <= n - linenumber; rspaceCount++)
			cout << " ";

		cout << endl;
	}

	return 0;
}