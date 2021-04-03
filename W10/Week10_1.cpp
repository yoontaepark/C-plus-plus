#include <iostream>
using namespace std;

int sortedSearch(int srtArr[], int srtArrSize, int val);

int main() {
	int srtArr[10] = { 1,3,5,7,9,11,13,15,17,19 };

	cout << sortedSearch(srtArr, 10, 13) << endl;

	return 0;
}

//복잡도: log2n 임, k번째 반복할때 n/2^(k-1)번 반복함. (1회차: n번, 2회차 n/2^(2-1)번, ...) // n/2^(k-1) = 1 이 되는 k는 log2n+1 
int sortedSearch(int srtArr[], int srtArrSize, int val) {
	int low, high, mid;
	int ind;
	bool found;

	low = 0;
	high = srtArrSize - 1;
	found = false;

	while ((found == false) && (low <= high)) { //low가 high를 넘어가거나, high가 low보다 낮아지면 값이 없다는 소리임
		mid = (low + high) / 2;  //mid값이 버림이 될수도 있는데 상관없음
		if (srtArr[mid] == val) {
			ind = mid;    //찾았을 경우 ind라는 변수를 만들어서 값을 넣어둠
			found = true;
		}
		else if (val < srtArr[mid])  //값이 중간보다 작기 때문에, mid~high구간은 해당없음. 따라서, high를 mid-1(mid도 답이 아니니까)로 옮김
			high = mid - 1;
		else // val > srtArr[mid], 값이 중간보다 크기 때문에, low~mid 구간은 해당없음. 따라서, low를 mid+1(mid도 답이 아니니까)로 옮김
			low = mid + 1;
	}

	//while 다 돌고나서 if문으로 결과 출력
	if (found == true)
		return ind;
	else
		return -1;
}
