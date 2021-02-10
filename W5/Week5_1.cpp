/*Primality testing(소수 판별법)*/

#include <iostream>
using namespace std;

int num;

bool isPrime(int num)
{
	int countDivs;
	countDivs = 0;

	/* 
	 1) 1~num까지 한개씩 증가되는 숫자로 나눠보고 나눠지면 count에 추가한다. 
	 2) num까지로 안하고 num/2로 한정해도 된다. 왜냐면 2로 나눠지는 숫자면 이미 소수가 아님. 
		1~num 기준으로 num/2 구간보다 큰 수는 2를 곱하면 num보다 커지므로, 2보다 작은 숫자를 곱해야 num이 되는데, 
		정수기준으로는 1밖에 없음. 그런데 1이면 num이 안됨. 따라서 검증할 필요조차 없음. 
	 3) sqrt(num)으로 한정해도 된다. 1~100 사이 두수의 곱이 100이 되려면, 적어도 한수는 sqrt(100)보다 작아야 한다. 
		두 수 중 sqrt(100) 보다 작은 한 수를 검증했다면, 상응하는 반대 큰수는 굳이 안해봐도 된다. 
		(예를들어서 105를 검증하기 위해 5에서 한번 == 0 이 나왔다면, 이미 카운팅 +1 이 되기 때문에 23은 할 필요가 없다
		 + 24는 애시당초 맞는 앞단 정수가 없어서 0이 안나온다. )

	- Runtime Analysis: 
	  T1(n) = 1(count 초기화) + 1(i 초기화) + 5(부등호, i증가, %, ==, count 증가) * n(n회 반복) + 1(아래 if ==) + 1(true or false) = 5n+4
	  T2(n) = 1(count 초기화) + 1(i 초기화) + 6(부등호, num/2, i증가, %, ==, count 증가) * n/2(n/2회 반복) + 1(아래 if ==) + 1(true or false) = 3n+4
	  T2(n) = 1(count 초기화) + 1(i 초기화) + 6(부등호, sqrt(num), i증가, %, ==, count 증가) * sqrt(n) + 1(아래 if ==) + 1(true or false) = 6sqrt(n) + 4
	 */

	for (int i = 1; i <= sqrt(num); i++)  //num → num/2 → sqrt(num) 
	{
		if (num % i == 0)
			countDivs++;
	}

	// 소수라면 1과 마지막 num 두개로 집계가 되어 있을 것, true. 아니라면 모두 false임 
	// 위 조건에서 num/2로 바꾸면 아래 조건도 ==2 에서 ==1로 바꾼다. (마지막 수는 카운팅 할 필요가 없음) 
	// 조건3의 경우에도 마지막 수는 카운팅 할 필요가 없기 때문에 조건은 ==1. 
	if (countDivs == 1) // 2 → 1 → 1 
		return true;
	else
		return false;
}


int main()
{
	cout << "Please enter any number: ";
	cin >> num;
	cout<< isPrime(num);

	return 0;
}