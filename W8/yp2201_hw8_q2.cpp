#include <iostream>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main()
{
	int arrEx[4] = { 2, -1, 3, 10 };
	int arrSum = sumOfSquares(arrEx, 4);
	cout << arrSum << endl;
	
	bool sortCheck = isSorted(arrEx, 4);

	if (sortCheck)
		cout << "Array Sorted" << endl;
	else
		cout << "Array not Sorted" << endl;

	return 0;
}

int sumOfSquares(int arr[], int arrSize)
{
	if (arrSize <= 0)
		return 0;
	else
		return sumOfSquares(arr, arrSize - 1) + (arr[arrSize - 1] * arr[arrSize - 1]);
}

bool isSorted(int arr[], int arrSize)
{
	if (arrSize == 1)
		return true;
	else
	{
		if (arr[arrSize-1] < arr[arrSize-2])
			return false;
		else
			return isSorted(arr, arrSize - 1);
	}		
}

