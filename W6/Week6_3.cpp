#include <iostream>
#include <string>
using namespace std;

int main()
{
	int ind;
	string userName;

	cout << "Please enter your name: " << endl;
	getline(cin, userName);

	//string end char부터 하나씩 출력
	// ex. userName이 ab이면 length는 2임. 근데 string은 userName[0], userName[1]로 구성이 됨. 
	// 따라서, 가장 끝의 char는 length-1임 
	for (ind = (userName.length() - 1); ind >= 0; ind--)
		cout << userName[ind];
	
	cout << endl;

	return 0;
}