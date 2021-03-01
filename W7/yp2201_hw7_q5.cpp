#include <iostream>
using namespace std;

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize);
int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr);
void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize);
void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr);
void printArray(int* arr, int arrSize);


int main()
{
	const int MAX_SIZE = 100;
	int numList[MAX_SIZE] = { 0 };

	int ind; 
	int numOfIntegers;
	int currInteger;
	
	
	
	
	cout << "Please enter number of integers you want to input" << endl;
	cin >> numOfIntegers;
	cout << endl;

	cout << "Please enter integers (seperated by space):" << endl;
	for (ind = 0; ind < numOfIntegers; ind++)
	{
		cin >> currInteger;
		numList[ind] = currInteger;	
	}
	
	int* posNum1;
	int newArrSize1;
	cout << "Case a) ";
	posNum1 = getPosNums1(numList, numOfIntegers, newArrSize1);
	printArray(posNum1, newArrSize1);

	int* posNum2;
	int* newArrSize2 = new int;

	cout << "Case b) ";
	posNum2 = getPosNums2(numList, numOfIntegers, newArrSize2);
	printArray(posNum2, *newArrSize2);


	int* outPosArr1;
	int newArrSize3;	
	cout << "Case c) ";
	getPosNums3(numList, numOfIntegers, outPosArr1, newArrSize3);
	printArray(outPosArr1, newArrSize3);
		

	cout << "Case d) ";
	getPosNums4(numList, numOfIntegers, &posNum2, newArrSize2);
	printArray(posNum2, *newArrSize2);

	delete[] posNum1;
	delete[] posNum2;
	delete[] outPosArr1;
	delete newArrSize2;
	
	return 0;
}

int* getPosNums1(int* arr, int arrSize, int& outPosArrSize)
{
	int* newNumArr = new int [arrSize];
	int newCount = 0;
	
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] > 0)
		{
			newNumArr[newCount] = arr[i];
			newCount++;			
		}
	}
	
	outPosArrSize = newCount;
	return newNumArr;

}

int* getPosNums2(int* arr, int arrSize, int* outPosArrSizePtr)
{
	int* newNumArr = new int[arrSize];
	int newCount = 0;

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] > 0)
		{
			newNumArr[newCount] = arr[i];
			newCount++;
		}
	}

	* outPosArrSizePtr = newCount;
	return newNumArr;

}


void getPosNums3(int* arr, int arrSize, int*& outPosArr, int& outPosArrSize)
{
	outPosArr = getPosNums1(arr, arrSize, outPosArrSize);
}


void getPosNums4(int* arr, int arrSize, int** outPosArrPtr, int* outPosArrSizePtr)
{
	*outPosArrPtr = new int[*outPosArrSizePtr];
	int newCount = 0;
	for (int i = 0; i < arrSize; i++) 
	{
		if (arr[i] > 0) 
		{
			(*outPosArrPtr)[newCount] = arr[i];
			newCount++;
		}
	}
}



void printArray(int* arr, int arraySize)
{
	cout << "New array containg only the positive numbers are: ";
	for (int i = 0; i < arraySize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << endl;
}