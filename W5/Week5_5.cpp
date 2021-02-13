// 숫자를 입력하면 각자리수가 몇자리인지, 그리고 각자리수의 합이 얼마인지 출력하는 프로그램

#include <iostream>
using namespace std;

int analyzeDigits(int num, int& outsum);

int main()
{
	int num, countDigs, sumDigs;

	cout << "Please enter a positive integer:" << endl;
	cin >> num;

	countDigs = analyzeDigits(num, sumDigs);

	cout << num << " has " << countDigs << " digits and their sum is " << sumDigs << endl;

	return 0;
}

int analyzeDigits(int num, int& outsum)
{
	int count, sum, currDig;

	count = 0;
	sum = 0;
	while (num > 0)
	{
		currDig = num % 10;
		sum += currDig;
		count++;
		num = num / 10;
	}
	outsum = sum; //&값부터 먼저 받을 수 있도록 세팅을 하고 
	return count; //value 값 return은 가장 마지막에 한다.
}
