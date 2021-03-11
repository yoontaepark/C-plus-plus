// 함수안의 함수 (부제: Ascending, Descending) 

#include <iostream>
using namespace std;


void printAsc(int start, int end);
void printAsc2(int start, int end);
void printAsc3(int start, int end);
int factorial(int n);

int main()
{
	printAsc(1,4);
	cout << endl;
	printAsc2(1,4);
	cout << endl;
	printAsc3(1,4);
	cout << endl << factorial(4) << endl;

	return 0;
}

// 러시아 마트료시카 같은 느낌으로 생각하면 됨
// 1~4라고 하면, (1,3)을 부르고, (1,2)를 부르고, (1,1)을 부른다음에
// (1,1)에서 1뽑고, 나와서 2뽑고, 나와서 3뽑고, 마지막으로 나와서 4뽑는다. 
// 즉, 1,2,3,4를 오름차순으로 배열해준다 
void printAsc(int start, int end)
{
	if (start == end)
		cout << start << endl;
	else
	{
		printAsc(start, end-1);
		cout << end << endl;
	}
}


// Version2, 위의 예제를 기준으로 해보면, 1을 먼저 뽑고, (2~4), 2를 뽑고 (3,4)
// 3을 뽑고(4,4) 4를 뽑고 종료 이렇게 갈수도 있다. 
void printAsc2(int start, int end)
{
	if (start == end)
		cout << start << endl;
	else
	{
		cout << start << endl;
		printAsc2(start + 1, end);
	}
}

// Version3, 중간을 짤라서 구성할수도 있다. 
void printAsc3(int start, int end)
{
	if (start == end)
		cout << start << endl;
	else
	{
		int mid = (start + end) / 2;
		printAsc3(start, mid);
		printAsc3(mid+1, end);
	}
}


// Factorial 함수, 위랑 비슷한데, 내림차순의 곱 형태를 만들면 됨 
// n = 4라면, res 에 4*fact(3)을 대입해서 리턴하고
// fact(3)은 다시 3*fact(2), fact(2)는 다시 2*fact(1), fact(1) = 1이 된다. 
// 따라서, 리턴한 값을 메인에서 확인해보면, 4*fact(3) = 4*3*fact(2) = 4*3*2*fact(1) = 4*3*2*1 이 된다. 
int factorial(int n)
{
	int res;
	
	if (n == 1)
		return 1;
	else
	{
		res = factorial(n - 1);
		res *= n;
		return res;
	}
		
}

