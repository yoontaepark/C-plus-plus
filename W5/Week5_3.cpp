//or you can use factorial function

/*nFact = factorial(n);
kFact = factorial(k);
n_kFact = factorial(n-k);*/

#include <iostream>
using namespace std;


int factorial(int num); //윗줄부터 함수를 읽기 때문에, 함수는 위에 먼저 선언해줘야함.(body는 하단에) 
int kCombinations(int n, int k);

int main()
{
	int n, k, k_comb;
	cout << "Please enter n and k " << endl;
	cin >> n >> k;
	
	//아래 kCom 함수를 호출하면, kCom에서는 factorial 함수를 호출한 값을 받아다가, 최종적인 return값을 다시 던져준다
	k_comb = kCombinations(n, k); 

	cout << n << " choose " << k << " is " << k_comb << endl; 

	return 0;
}

int kCombinations(int n, int k)
{
	int nFact, kFact, n_kFact;
	nFact = factorial(n);
	kFact = factorial(k);
	n_kFact = factorial(n - k);

	return (nFact / (kFact * n_kFact));
}

int factorial(int num)  //변수 num을 넣으라는게 아니라 동 함수 ()안에다 변수를 넣으라는 소리임 
{
	int factRes, i;
	factRes = 1;
	for (i = 1; i <= num; i++)
		factRes *= i;

	return factRes;
}