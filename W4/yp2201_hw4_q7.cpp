#include <iostream>
using namespace std;

int main()
{
	int n;
	int i, j;

	cout << "Please enter a positive integer:" << endl;
	cin >> n;

	for (i = 1; i <= n; i++)
	{ 
		for (j = 1; j <= n; j++)
			cout << i * j << "\t";
		cout << endl;
	}
	return 0;
}

