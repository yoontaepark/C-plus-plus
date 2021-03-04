//Q) 
//라인수 제한 없이 치고 마지막에 enter 치면 끝나도록 프로그램 구현 
//방식은 라인이 생길때마다 전단계 배열을 복사한후 하나 더하는 방식(theta(n^2))도 있지만,
//라인이 생길때마다 전단계 배열을 두배로 늘리는 방식(1+2+4+...+n) = 2n-1개, (1+2+4+...+2^n = 2*2^n - 1에서)
//을 쓰면 복잡도가 theta(n)이 되므로 이방법을 사용한다. 

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
using namespace std;

string* readText2(int& outTextArrSize);


int main()
{
	// 입력할 게 문자열이니 string으로 선언하고, 포인터를 사용해서 데이터를 주고받을거라 포인터를 사용
	string* textArr;
	int textArrSize;


	// 입력값을 넣었을 때 원하는 값이 나오는 함수를 만들고
	textArr = readText2(textArrSize);

	// 최종적으로 출력한다. 이경우 string의 배열형태로 출력
	cout << "Your text is:" << endl;
	for (int i = 0; i < textArrSize; i++)
		cout << i + 1 << ". " << textArr[i] << endl;

	delete[] textArr; //지우는건 main함수에서 지운다

	return 0;
}


string* readText2(int& outTextArrSize)
{
	string* textArr;
	string currLine;
	int textArrSize, textArrPhysicalSize;
	bool seenEndOfText;

	cout << "Please enter a sequence of lines." << endl;
	cout << "End your input with an empty line." << endl;

	textArr = new string[1];
	textArrSize = 0;
	textArrPhysicalSize = 1;

	seenEndOfText = false;
	while (seenEndOfText == false)
	{
		getline(cin, currLine);
		if (currLine == "")
			seenEndOfText = true;
		else
		{
			if (textArrSize == textArrPhysicalSize) //가득찼을 경우 새로 배열을 생성
			{
				string* newTextArr;
				newTextArr = new string[2.0*textArrPhysicalSize];

				// 기존꺼 일단 복사
				for (int i = 0; i < textArrSize; i++)
					newTextArr[i] = textArr[i];
				
				//기존꺼 삭제(다시 붙여넣기 위해 비워놓아야 함)
				delete[] textArr;

				// 복사한 것을 다시 붙여넣기, 이때 배열 크기만 늘고 값은 그대로 복사해온거라고 보면 됨
				textArr = newTextArr;
				textArrPhysicalSize *= 2;
			}
			textArr[textArrSize] = currLine; // 가득안찼으면 기존 배열에 값을 채워넣는다
			textArrSize++;
		}
	}
	outTextArrSize = textArrSize;
	return textArr;
}
