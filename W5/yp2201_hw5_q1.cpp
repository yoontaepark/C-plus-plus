#include <iostream>
using namespace std;


int fib(int n);

int main()
{
	int num;

	cout << "Please enter a positive integer: ";
	cin >> num;
	cout << fib(num) << endl;

	return 0;
}

int fib(int n)
{
	if (n <= 1) // fib(0) = 0, fib(1) = 1, fib(2) = fib(1) + fib(0) = 1
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
