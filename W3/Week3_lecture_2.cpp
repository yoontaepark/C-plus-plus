#include <iostream>
using namespace std;

// 4개의 숫자를 입력받아서, 짝수 혹은 홀수 개수가 많은지 확인하는 프로그램

int main()
{
	////방법 1, 그냥 4개의 변수를 구분해서 각각 if문을 먹인다, 되긴하는데 좀 코드가 길다
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;
	//int num4 = 0;
	//int evensCount = 0;
	//int oddsCount = 0;

	//cout << "Please enter 4 positive integers, separated by a space" << endl;
	//cin >> num1 >> num2 >> num3 >> num4;

	//if ((num1 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//if ((num2 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//if ((num3 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//if ((num4 % 2) == 0)
	//	evensCount += 1;
	//else
	//	oddsCount += 1;

	//방법2: num 자체는 변수를 통일한다. (repeat 함수는 배우면 쓰기)

	int num = 0;
	int evensCount = 0;
	int oddsCount = 0;

	cout << "Please enter 4 positive integers, separated by a space" << endl;
	//repeat 4 time: 이런걸 원래 쓰면 반복해서 if문을 작성하지 않아도 된다. 
	cin >> num;  
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	cin >> num;
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	cin >> num;
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	cin >> num;
	if ((num % 2) == 0)
		evensCount += 1;
	else
		oddsCount += 1;

	if (evensCount > oddsCount)
		cout << "More even numbers" << endl;
	else if (evensCount < oddsCount)
		cout << "More odd numbers" << endl;
	else
		cout << "Same number of evens and odds" << endl;

	return 0;

}