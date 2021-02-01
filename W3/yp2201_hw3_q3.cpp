#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	double x1 = 0.0;
	double x2 = 0.0;

	cout << "Please enter value of a:";
	cin >> a;

	cout << "Please enter value of b:";
	cin >> b;

	cout << "Please enter value of c:";
	cin >> c;


	if ((a == 0) && (b == 0) && (c == 0))
		cout << "This equation has infinite number of solutions" << endl;
	else if ((a == 0) && (b == 0) && (c != 0))
		cout << "This equation has no solution" << endl;
	else if ((a == 0) && (b != 0) && (c == 0))
	{
		cout << fixed;
		cout.precision(1);
		cout << "This equation has a single real solution x=0.0" << endl;
	}
	else if ((a == 0) && (b != 0) && (c != 0))
	{
		cout << fixed;
		cout.precision(1);
		x1 = -c / b;
		cout << "This equation has a single real solution x=" << x1 << endl;
	}
	else if ((a != 0) && ((pow(b, 2) - 4 * a * c) == 0))
	{
		cout << fixed;
		cout.precision(1);
		x1 = -b / (2 * a);
		cout << "This equation has a single real solution x=" << x1 << endl;
	}
	else if ((a != 0) && ((pow(b, 2) - 4 * a * c) > 0))
	{
		cout << fixed;
		cout.precision(1);
		x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		cout << "This equation has a two real solution x1=" << x1 << ", x2=" << x2 << endl;
	}
	else
		cout << "This equation has no real solution" << endl;

	return 0;

	/*if (a == 0) 
		if (b == 0)
			if (c == 0)
				cout << "This equation has infinite number of solutions";
			else
				cout << "This equation has no solution";
		else
			x1 = -c / b;
			cout << "This equation has a single real solution x=" << x1 << endl;
	else
		if ((pow(b, 2) - 4 * a * c) == 0)
			x1 = -b / (2 * a);
			cout << "This equation has a single real solution x=" << x1 << endl;
		else if ((pow(b, 2) - 4 * a * c) > 0)
			x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2*a);
			x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2*a);
			cout << "This equation has a two real solution x1=" << x1 << ", x2=" << x2 << endl;
		else
			cout << "This equation has no real solution" << endl;*/

}