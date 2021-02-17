#include <iostream>
using namespace std;

double eApprox(int n);
int factorial(int num);

int main()
{
	cout.precision(30);

	for (int n = 1; n <= 15; n++)
	{
		cout <<"n = "<<n<<'\t'<<eApprox(n)<<endl;
	}

	return 0;
}


double eApprox(int n)
{
	double sum = 1; 

	for (int i = 1; i <= n; i++)
		sum += 1.0 / (factorial(i));

	return sum;
}

int factorial(int num) 
{
	int factRes, i;
	factRes = 1;
	for (i = 1; i <= num; i++)
		factRes *= i;

	return factRes;
}