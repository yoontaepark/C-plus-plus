#include <iostream>
using namespace std;


void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main()
{
	int num, marg;
	char symb;
	
	cout << "Please enter the number of triangles in tree: ";
	cin >> num;
	cout << "Please enter the character filling the tree: ";
	cin >> symb;

	
	printPineTree(num, symb);

	return 0;
}


/*printShiftedTriangle(2, 2, '+');
printShiftedTriangle(3, 1, '+');
printShiftedTriangle(4, 0, '+');
printShiftedTriangle(i, n-i+1, '+');
*/

void printPineTree(int n, char symbol)
{
	for (int i = 2; i <= n + 1; i++)	
		printShiftedTriangle(i, (n-i+1), symbol);
}

void printShiftedTriangle(int n, int m, char symbol)
{
	for (int line = 1; line <= n; line++)
	{
		for (int margin = 1; margin <= m; margin++)
			cout << " ";
		for (int space = 1; space <= n - line; space++)
			cout << " ";
		for (int sym = 1; sym <= (2 * line) - 1; sym++)
			cout << symbol;
		cout << endl;
	}
}