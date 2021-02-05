#include <iostream>
using namespace std;


//Counting and summing digits
int main() 
{
	int num;
	int sumDigits, countDigits;
	int currDigit;

	cout << "Enter a positive integer: ";
	cin >> num;
	sumDigits = 0;
	countDigits = 0;
	while (num > 0) //num = 0 이 되면 끝
	{
		currDigit = num % 10; //현재숫자에서 일의자리를 뽑는다
		countDigits++; //digit을 카운팅한다. 추후 몇자리 수인지 판별
		sumDigits += currDigit; //digit의 각 숫자들의 합을 산출
		num = num / 10; //다음 자리로 넘어가기 위해, 10으로 나누면 십의자리가 일의자리로 변환 
	}

	cout << num << " has " << countDigits << " Digits "; //입력한 양의정수가 몇자리수인지 
	cout << "and their sum is " << sumDigits << endl;


	return 0;
}