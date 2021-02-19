#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	//1) Using getline function to get strings including spaces(Concatenating)

	cout << "Please enter your name" << endl;
	// cin >> str; 띄어쓰기 포함해서 표현은 못함
	getline(cin, str); // 이렇게 해야 띄어쓰기를 포함해서 표현가능
	cout << str << endl;
	

	//2) Indexing Strings
	// String에 [0] [1] 을 달면 string을 구성하는 각각의 char들을 매핑함

	string str1, str2;
	char ch;

	str1 = "abcdefg";
	cout << str1[0] << " " << str1[1] << " " << str1[2] << endl;

	ch = str1[3];
	cout << str1[0] << " " << str1[1] << " " << str1[2] << " " << ch << endl;


	// 3) Slicing strings
	// 변수명.substr(start point, how long)을 사용한다 

	cout << str1.substr(3, 2) << endl; //3이 순서상 0,1,2가 아니라 [3] 부터 시작해서 2자리, [3], [4]
	str2 = str1.substr(2, 3); //이 경우 c(str1[2]니까), d, e가 나옴


	// 4) Length, 변수명.length() 함수를 사용
	cout << str1.length() << endl;  //7이 나와야함., 마지막 char를 뽑고 싶으면 (length - 1) 해주기 


	return 0;
}