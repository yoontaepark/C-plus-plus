//Sorting Algorithms
//Selection-sort, Merge-sort 
//Selection Sort: 처음부터 나머지 뒤랑 쭉 비교한다음에 변경, 두번째거 집어서 세번째~뒤랑 쭉 비교한다음에 변경, 반복..
//Merge Sort: 반나눠서 각각 소트한후에 합쳐서 소트한다


//1. Selection Sort

//가장 작은수를 찾아서, 그 수가 들어있는 인덱스를 리턴시키기
//복잡도 = n^2+n = n^2
//복잡도 = n 
int findIndexOfMin(int arr[], int low, int high) { 
	int min, minInd;

	min = arr[low];  //처음에는 low가 0번째 배열임
	minInd = low;

	//0번째와 1~n번째 배열을 비교해야하므로, 시작지점이 +1이어야 함
	for (int i = low + 1; i <= high; i++) {
		if (arr[i] < min) { //min보다 작은 배열이 있다면, min을 갈아끼운다. 
			min = arr[i];
			minInd = i;
		}
	}

	return minInd;

}

//가장 작은수가 들어있는 인덱스를 받아서, 0번째부터 바꿔치기, 0번째꺼 바꿔치면 0번째 제외하고 위 함수 돌리기 
//복잡도: n + n-1 + ... + 1 = n^2
void selectionSort(int arr[], int arrSize) {

	for (int i = 0; i < arrSize; i++) {
		int minInd = findIndexOfMin(arr, i, arrSize-1);  //가장 작은수를 찾은 후
		swap(arr[i], arr[minInd]);
	}

}


//1. Merge Sort
//복잡도: log2n * n , Lv0: 1개 배열을 n번 돌림(총 비용은 1*n), Lv1: 2개 배열을 n/2번, Lv2: 4개 배열을 n/4번, ..., Lv k: 2^k개 배열을 n/(2^k)번...
//마지막 Lv은 log2n이 되고, 이때 n개 배열을 1번 돋림. (2^k = n이 되는 k 는 log2n) 
//다라서 log2n번 동안 n번 돌림

#include <iostream>
using namespace std;

void printArray(int arr[], int arrSize);
void mergeSort(int arr[], int low, int high);
void merge(int arr[], int lowLeft, int highLeft, int highRight); // lowright == highleft+1 이므로 굳이 매개변수로 안받아도 됨 


int main() {
	int arr[8] = { 14,5,8,10,13,1,18,3 };
	int arrSize = 8;

	mergeSort(arr, 0, arrSize - 1);
	printArray(arr, arrSize);

	return 0;
}


void printArray(int arr[], int arrSize) {
	int i;

	for (i = 0; i < arrSize; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

void mergeSort(int arr[], int low, int high) {
	int midInd;

	if (low == high)
		return;
	else {
		midInd = (low + high) / 2;
		mergeSort(arr, low, midInd);
		mergeSort(arr, midInd+1, high);
		merge(arr, low, midInd, high);
	}
}


void merge(int arr[], int lowLeft, int highLeft, int highRight) {
	int lowRight, size;
	int* mergedArr;
	int iLeft, iRight, iRes; 

	lowRight = highLeft + 1; // lowRight의 값을 지정
	size = highRight - lowLeft + 1; // 배열의 총 크기
	mergedArr = new int[size]; //새로운 배열을 선언, 배열을 받아야하니 포인터변수로 받는다

	iLeft = lowLeft;   // 왼쪽 첫배열 
	iRight = lowRight; // 오른쪽 첫배열
	iRes = 0; //새로운 배열을 채워넣기 위한 배열 순서 초기화(0으로)

	while ((iLeft <= highLeft) && (iRight <= highRight)) {
		if (arr[iLeft] < arr[iRight]) { //왼쪽배열 과 오른쪽 배열을 비교해서 왼쪽배열꺼 첫 숫자가 더 작다면
			mergedArr[iRes] = arr[iLeft];  //더 작은값을 새로운 배열에 채워넣는다
			iLeft++; // 왼쪽 배열은 다음걸로 넘어가고
			iRes++;  // 새로운 배열도 다음걸로 넘어간다
		}
		else { //오른쪽 배열 숫자가 더 크다면(같을경우도 포함하는데, 사실 등호는 어디에 붙던 상관없다) 
			mergedArr[iRes] = arr[iRight]; //오른쪽 배열의 숫자를 새로운 배열에 채워넣는다
			iRight++; // 오른쪽 배열은 다음걸로 넘어가고
			iRes++;   // 새로운 배열도 다음걸로 넘어간다 
		}
	}

	while (iLeft <= highLeft) { //왼쪽만 남았다면, 나머지 왼쪽을 새로운 배열에 몽땅 넣기 
		mergedArr[iRes] = arr[iLeft];
		iLeft++;
		iRes++;
	}

	while (iRight <= highRight) { //오른쪽만 남았다면, 나머지 오른쪽을 새로운 배열에 몽땅 넣기 
		mergedArr[iRes] = arr[iRight];
		iRight++;
		iRes++;
	}

	for (int i = 0, iArr = lowLeft; i < size; i++, iArr++)
		arr[iArr] = mergedArr[i];

	delete []mergedArr;

}