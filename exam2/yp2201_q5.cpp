#include <iostream>
using namespace std;

void oddsKeepEvensFlip(int arr[], int arrSize);

int main()
{
	int arr[6] = { 5, 2, 11, 7, 6, 4 };
	int arrSize = 6;
	oddsKeepEvensFlip(arr, arrSize);
	for (int i = 0; i < arrSize; i++)
		cout << arr[i] << " ";

	return 0; 
}

void oddsKeepEvensFlip(int arr[], int arrSize)
{
	int temp[6] = { 0 };
	int j = 0;

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] % 2 != 0)
		{
			temp[j] = arr[i];
			j++;
		}
	}

	for (int i = arrSize - 1; i >= 0; i--)
	{
		if (arr[i] % 2 == 0)
		{
			temp[j] = arr[i];
			j++;
		}
	}

	for (int i = 0; i < arrSize; i++)
		arr[i] = temp[i];
}