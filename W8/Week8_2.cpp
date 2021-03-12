// Recursion 추가 예제(짝수만 찾기)

#include <iostream>
using namespace std;


bool arrAllEven(int arr[], int n);

int main()
{
	int arr[4] = { 2, 20, 45, 14 };

	if (arrAllEven(arr, 4) == true)
		cout << "All are even" << endl;
	else
		cout << "Not all are even" << endl;

	return 0;
}

bool arrAllEven(int arr[], int n)
{
	bool res;

	if (n == 1)
		return (arr[0] % 2 == 0);
	else
	{
		res = arrAllEven(arr, n - 1);
		if (res == true)
			return (arr[n - 1] % 2 == 0);
		else
			return false;
	}
}