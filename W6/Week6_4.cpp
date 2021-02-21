// String간 크기 비교는 어떻게? 길이비교는 아님. (ex) abc보다 de가 더 큼)
// 길이차이가 아니라, 첫char를 int로 변환한 값이 더 크면 (첫 char 끼리 같으면 그 다음 비교) 큼 
#include <iostream>
#include <string>
using namespace std;

int main()
{

	/*string str1, str2;

	str1 = "abcdefg";
	str2 = "abcdxyz";

	if (str1 > str2)
		cout << "str1 is greater than str2";
	else
		cout << "str2 is greater than str1";*/

// Search function in a string. 
// 변수명.find("찾을 문구")

	string str3 = "abcdbcdefg";

	//값이 존재하는 경우 값을 출력함. 정확히는 값의 첫번째 index 값을 출력. str3[6]에 위치하므로 6
	cout << str3.find("de") << endl; 
	
	//값이 존재하지 않는 경우 난수를 출력함. 따라서 if문을 걸어준다. 
	if (str3.find("xyz") == string::npos) //npos: 쓰레기값이라고 이해하기 
		cout << "not found" << endl;
	else
		cout << "found" << endl;

	// 출력할 값이 중복으로 존재하는 경우 가장 앞에 있는 위치를 출력한다. 
	cout << str3.find("cd") << endl;

	//find 함수의 확장된 버젼으로, 시작할 위치를 지정해서 찾을수도 있따. 
	// 위의 cd 예제에서 ("cd", 3) 이라고 지정하면, [3]부터 조회를 시작하기 때문에 뒤의 cd를 찾아서 첫번째 인덱스인 5를 출력한다. 
	cout << str3.find("cd", 3) << endl;

	return 0;
}