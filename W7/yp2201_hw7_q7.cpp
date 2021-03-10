#include <iostream>
#include <string>
using namespace std;

int* findMissing(int arr[], int n, int& resArrSize);

int main()
{

	int arrSize = 6;
	int arr[] = {3, 1, 3, 0, 6, 4};
	int* missingNumArr;
	int newArrSize;

	cout << "Size of number Array: " << arrSize << endl;
	cout << "Number Array: [";
	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i];
		if (i != arrSize - 1)
			cout << ",";
	}
	cout << "]" << endl << endl;
	

	missingNumArr = findMissing(arr, arrSize, newArrSize);

	cout << "Missing number Array size: " << newArrSize << endl;
	cout << "Missing number Array: [";
	for (int i = 0; i < newArrSize; i++)
	{
		cout << missingNumArr[i];
		if (i != newArrSize - 1)
			cout << ",";
	}
	cout << "]" << endl;

	delete[] missingNumArr;
		
	return 0;
}


int* findMissing(int arr[], int n, int& resArrSize)
{
	int* tempArr = new int[n];
	for (int i = 0; i < n; i++)
		tempArr[i] = i;

	int count = n;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] < n) && (tempArr[arr[i]] != -1))
		{
			tempArr[arr[i]] = -1;
			count--;
		}
	}

	int* missingArr = new int[count];
	int j = 0;

	for (int i = 0; i < n; i++)
	{
		if (tempArr[i] != -1)
		{
			missingArr[j] = tempArr[i];
			j++;
		}
	}

	delete[] tempArr;
	resArrSize = count;
	return missingArr;
}

