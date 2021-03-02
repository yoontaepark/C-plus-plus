//2. Chainging values out of active scope

 1. 함수를 만들어서 리턴만 시킴
int main()
{
	int n;
	n = f1();
	cout << n << endl;
}

int f1()
{
	return 3;
}

 2. Call by Reference 형태로 주소에 담긴 값을 변경
 int main()
{
	 int n;
	 f2(n);
	 cout << n << endl;
}

 // 함수자체가 변수의 주소값을 업데이트 치는 형태이므로, n의 주소(&outN)을 찾아서, 그 주소안의 값을 3으로 바꿔라 라는 의미  
 void f2(int& outN)
 {
	 outN = 3;
 }

 3. 포인터를 사용
int main()
{
	 int n;
	 f3(&n);
	 cout << n << endl;
}

 // 포인터 변수가 들어가면 그 주소를 찾아들어가서 안의 값을 변경한다는 소리임
 // 따라서 main함수에서는 주소를 변수로 받아야 함(&n)
 void f3(int* pn)
 {
	 *pn = 3;
 }

