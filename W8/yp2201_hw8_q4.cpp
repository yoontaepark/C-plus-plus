#include <iostream>
using namespace std;

int jumpIt(int arr[], int start, int end);

int main()
{
	int arr[6] = { 0, 3, 80, 6, 57, 10 };
	int lowestCost = jumpIt(arr, 0, 5);
	cout << "Lowest cost is " << lowestCost << endl;


	return 0;
}


int jumpIt(int arr[], int start, int end)
{
	int sum = 0;
	if (start == end)	
	{
		return arr[end];
	}

	else
	{
		if (start + 1 == end)
		{
			return arr[start] + arr[end];
		}
		else if (start + 2 == end)
		{
			return arr[start] + arr[end];
		}
		else
			if (jumpIt(arr, start + 1, end) < jumpIt(arr, start + 2, end))
			{
				return arr[start] + jumpIt(arr, start + 1, end);
			}
			else
			{
				return arr[start] + jumpIt(arr, start + 2, end);
			}
	}
}