#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;
int numOfIntegers;
int ind;

int currInteger;
int numList[MAX_SIZE];

void oddsKeepEvensFlip(int arr[], int arrSize);


int main()
{
	cout << "Please enter number of integers you want to input" << endl;
	cin >> numOfIntegers;
	cout << endl;
	
	cout << "Please enter number of integers (seperated by , and space):" << endl;
	for (ind = 0; ind < numOfIntegers; ind++)
	{
		cin >> currInteger;
		numList[ind] = currInteger;
	}

	oddsKeepEvensFlip(numList, numOfIntegers);	
	
	return 0;
}


void oddsKeepEvensFlip(int arr[], int arrSize)
{
	int i;
	for (i = 0; i < arrSize; i++)
	{
		if (arr[i] % 2 == 1)
		{
			cout << arr[i] << " ";
		}
	}

	for (i = arrSize - 1; i > -1; i--)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
}
