#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	int counter, powerof2;

	cout << "Please enter a postive integer: " << endl;
	cin >> n;


	//while은 while문 안()에 조건문만 넣고, 초기화와 증감표현은 각각 따로 해야한다. 
	cout << "Using while - direct approach" << endl;
	counter = 1;
	while (counter <= n)
	{
		powerof2 = pow(2, counter - 1);		
		cout << counter << ". " << powerof2 << endl;
		counter++;
	}

	//for는 초기화, 조건문, 증감표현을 한번에 한다. 
	cout << endl << "Using for - direct approach" << endl;
	for (counter = 1; counter <= n; counter ++)
	{
		powerof2 = pow(2, counter - 1);
		cout << counter << ". " << powerof2 << endl;
	}


	cout << endl<< "Using while - incremental approach" << endl;
	counter = 1;
	powerof2 = 1;
	while (counter <= n)
	{
		//powerof2 = pow(2, counter - 1);
		cout << counter << ". " << powerof2 << endl;
		counter++;
		powerof2 *= 2;
	}

	cout << endl << "Using for - incremental approach" << endl;
	//for문에 초기화와 증감분을 복수로 넣을 수도 있다. (,로 구분)
	for (counter = 1, powerof2 = 1; counter <= n; counter++, powerof2 *= 2)
	{
		//powerof2 = pow(2, counter - 1);
		cout << counter << ". " << powerof2 << endl;
	}

	return 0;
}
