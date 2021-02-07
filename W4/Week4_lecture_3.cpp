#include <iostream>
using namespace std;

int main()
{
	int currInput;
	int sum, count;
	int evensCount;
	double average;
	bool keepGoing;

	cout << "Please enter a sequence of positive integers." << endl;
	cout << "End by typing -1:" << endl;

	sum = 0;
	count = 0;
	evensCount = 0;
	keepGoing = true;

	while (keepGoing == true)
	{
		// 1. read the input
		cin >> currInput;

		// and check if it is -1 or not
		if (currInput == -1)
			keepGoing = false;
		else
		{	// 2. add it to the statistics
			sum += currInput;
			count++;

			//if I wan to check even counts,
			if ((currInput % 2) == 0)
				evensCount++;
		}
	}

	average = (double)sum / (double)count;

	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << average << endl;
	cout << "Even count is: " << evensCount << endl;

	return 0;
}