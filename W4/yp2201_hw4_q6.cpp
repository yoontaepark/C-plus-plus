#include <iostream>
using namespace std;

int main()
{
	int n;
	int digitCount;
	int evenCount, oddCount;
	int checkNum;
	int i;
		

	cout << "Please input an integer: ";
	cin >> n;

	
	for (i = 1; i <= n; i++)
	{
		checkNum = i;	
		digitCount = 0;
		evenCount = 0;
		oddCount = 0;

		while (checkNum > 0)
		{
			digitCount = checkNum % 10;
		
			if (digitCount % 2 == 0)
				evenCount++;
			else
				oddCount++;
			checkNum = checkNum / 10;

		}
		if (evenCount > oddCount)
			cout << i << endl;
	}

	return 0;
}