#include <iostream>
using namespace std;

void analyzeDividors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
int sumFactors(int num);

int main()
{
	int num;

	cout << "Please enter a positive integer >=2: ";
	cin >> num;
	cout << endl << "1) All the perfect numbers between 2 and M(>=2): " << endl;
	for (int i = 2; i <= num; i++)
		isPerfect(i);	
	cout << endl << endl;


	cout << "2) All pairs of amicable numbers that are between 2 and M (both numbers must be in the range): " << endl;
	
	for (int i = 2; i <= num; i++)
	{
		for (int j = 2; j <= num; j++)
			if ((sumFactors(i) == j) && (sumFactors(j) == i) && (i != j) && (i < j))
				cout << i << " and " << j << " are amicable " << endl;
	}

	cout << endl << endl;

	return 0;
}

int sumFactors(int num)
{
	int a, b;
	analyzeDividors(num, a, b);

	return b;
}

bool isPerfect(int num)
{
	int a, b;
	analyzeDividors(num, a, b);
	if (num == b)
	{
		cout <<"   "<< num;
		return true;
	}
	else
		return false;
}


void analyzeDividors(int num, int& outCountDivs, int& outSumDivs)
{
	int count, sum;
	count = 0;
	sum = 0;

	if (num < 2)
		cout << "It is an error!!" << endl;
	else
	{
		for (int i = 1; i < sqrt(num); i++)  
		{
			if (num % i == 0)
			{
				sum += i;
				count++;
			}
		}

		for (int j = sqrt(num); j > 1; j--) 
		{
			if (num % j == 0)
			{
				sum += (num / j);
				count++;
			}
		}
		outSumDivs = sum;
		outCountDivs = count;		
	}
}

