#include <iostream>
using namespace std;

void resizeArray(int*& arr, int currentSize, int newSize)
{
	// temp라는 포인터변수를 지정해서 사이즈를 변환
	int* temp = new int[newSize];

	//arr 값을 전부 temp에 복사
	for (int i = 0; i < currentSize; i++)
		temp[i] = arr[i];

	// arr 값을 삭제
	delete[] arr;

	// temp값을 재복사 
	arr = temp;
}


int main()
{
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = i * 10;
		cout << arr[i] << endl;
	}
	int oneMore = 110;
	int newSize = size * 2;

	// 이시점에 arr 사이즈를 바꾸려면 10개짜리를 지우고 20개짜리를 재생성해야함
	resizeArray(arr, size, newSize);
	size = newSize;
	arr[size-1] = oneMore;

	cout << "arr[" << size-1 << "] is " << arr[size-1] << endl;
	
	return 0;
}