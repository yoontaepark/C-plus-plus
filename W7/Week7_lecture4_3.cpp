//Q) 
//라인수 제한 없이 치고 마지막에 enter 치면 끝나도록 프로그램 구현 
//vector 펑션을 사용하면 쉽게 구현이 가능하다. (vector 평션 = 동적 할당)

//adc def
//ghij
//klm rop qrst 
//
//Your text is:
//1. abc def
//2. ghij
//3. klm nop qrst

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> readText3();
int main_vector();

int main()
{
	main_vector();

	return 0;
}

int main_vector()
{
	vector<string> textVector;  //배열인 문자열을 선언함. 이때 아까 배열 크기 바꾸고 하는걸 안해도 됨(정확히는 펑션이 해줌)
	
	textVector = readText3();

	cout << "Your text is:" << endl;
	for (int i = 0; i < textVector.size(); i++)
		cout << i + 1 << ". " << textVector[i] << endl;

	return 0;
}

vector<string> readText3()
{
	vector<string> textVector;
	bool seenEndOfText;
	string currLine;

	cout << "Please enter a sequence of lines." << endl;
	cout << "End your input with an empty line." << endl;

	seenEndOfText = false;
	while (seenEndOfText == false)
	{
		getline(cin, currLine);
		if (currLine == "")
			seenEndOfText = true;
		else
			textVector.push_back(currLine);
	}
	return textVector;
}
