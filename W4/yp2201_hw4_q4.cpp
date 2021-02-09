#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int count;
	int i;
	int seq;
	int multi, multi2;
	double geoMean, geoMean2;
	bool keepGoing;

	multi = 1;
	cout << "section a" << endl;
	cout << "Please enter the length of the sequence: ";
	cin >> count;

	cout << "Please enter your sequence: "<< endl;
	for (i = 1; i <= count; i++)
	{
		cin >> seq;
		multi *= seq;		
	}

	geoMean = pow(double(multi), 1.0/double(count));
		
	cout << fixed;
	cout.precision(4); //to make total price xx.xxxx
	cout << "The geometric mean is: " << geoMean << endl;


	cout << endl << "section b" << endl;
	cout << "Please enter a non-empty sequence of positiv integers, each one in a separate line. End your sequence by typing-1: " << endl;
	i = 0;
	multi2 = 1;
	keepGoing = true;

	while (keepGoing == true)
	{
		// 1. read the input
		cin >> seq;

		// and check if it is -1 or not
		if (seq == -1)
			keepGoing = false;
		else
		{	// 2. add it to the statistics
			multi2 *= seq;
			i++;
		}
	}
	geoMean2 = pow(double(multi2), 1.0 / double(i));

	cout << fixed;
	cout.precision(4); //to make total price xx.xxxx
	cout << "The geometric mean is: " << geoMean2 << endl;

	return 0;

}