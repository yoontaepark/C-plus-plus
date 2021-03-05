#include <iostream>
using namespace std;


int findNumberOfFixedPoints(int arr[], int arrSize);

int main()
{
	int arr[5] = { 3, 1, 4, 7, 4 };
	int res = findNumberOfFixedPoints(arr, 5);
	cout << res << endl;

	return 0;
}

int findNumberOfFixedPoints(int arr[], int arrSize)
{
	int count = 0;

	if (arrSize == 0)
		return 0;
	else
	{
		if (arr[arrSize - 1] == (arrSize - 1))
		{
			count++;
			arrSize--;
			return count + findNumberOfFixedPoints(arr, arrSize);
		}
		else 
		{
			arrSize--;
			return count + findNumberOfFixedPoints(arr, arrSize);
		}
	}
}