#include <iostream>
using namespace std;

const int MAX_SIZE = 20;

int minInArray(int arr[], int arrSize);
void locInArray(int arr[]);

int main()
{
	int arr[MAX_SIZE];
	int input_num;


	cout << "Please enter 20 integers separated by a space:" << endl;
	

	for (int i = 0; i <= 19; i++)
	{
		cin >> input_num;
		arr[i] = input_num;
	}
	
	cout << "The minimum value is " << minInArray(arr, 20) << ", and it is located in the following indices: ";
	locInArray(arr);
	cout <<endl;

	return 0;
}

int minInArray(int arr[], int arrSize)
{
	int min;
	min = arr[0];
	for (int i = 0; i <= 19; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	
	return min;
}

void locInArray(int arr[])
{
	int min;
	min = arr[0];
	for (int i = 0; i <= 19; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	for (int i = 0; i <= 19; i++)
	{
		if (arr[i] == min)
			cout << i << " ";
	}
}
