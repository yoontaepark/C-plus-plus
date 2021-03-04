//Q) 
//Please enter number of lines
//3
//Please enter 3 lines:
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

string* readText(int& outTextArrSize);

int main()
{
	// 입력할 게 문자열이니 string으로 선언하고, 포인터를 사용해서 데이터를 주고받을거라 포인터를 사용
	string* textArr; 
	int textArrSize;


	// 입력값을 넣었을 때 원하는 값이 나오는 함수를 만들고
	textArr = readText(textArrSize);

	// 최종적으로 출력한다. 이경우 string의 배열형태로 출력
	cout << "Your text is:" << endl;
	for (int i = 0; i < textArrSize; i++)
		cout <<i+1<<". "<<textArr[i] << endl;

	delete[] textArr; //지우는건 main함수에서 지운다

	return 0;
}

//()를 &로 표현했다 = 리턴하는게 없어도 변수값 자체는 변경이 되어서 main함수로 돌아간다
string* readText(int& outTextArrSize)
{
	int textArrSize;
	string* textArr;

	cout << "Please enter number of lines:" << endl;
	cin >> textArrSize;
	cin.ignore(1); //cin을 쓰면서 발생할 수 있는 빈칸 출력 오류를 해결

	textArr = new string[textArrSize]; //배열 초기화를 함

	// 각 arr마다 
	cout << "Please enter " << textArrSize << " lines:" << endl;
	for (int i = 0; i < textArrSize; i++)
		getline(cin, textArr[i]);

	outTextArrSize = textArrSize;
	return textArr;
}


//참고: cin과 getline의 활용
//결론: cin은 출력한 후 enter직전에서 커서가 멈춤
//      getline은 출력한 후 enter 다음에서 커서가 멈춤
//      따라서, getline과 cin을 섞어쓰다보면 cin 다음에 나오는 getline에 공백이 나올 수도 있다. 

//ex1) 
//int i, j;
//string s;
//double x;
//cin >> i >> j >> x >> s;  

//입력값 시작
//(space)(space)(tab)37(tab)(space)(enter)
//(space)(space)(space)43.52(space)(space)(tab)37.2(space)(enter)
//abc(enter) 일 경우?

//결과값
//i = 37, j = 43, x = 0.52, s = "37.2"


//ex2)
//string s1, s2, s3;
//getline(cin, s1);
//cin >> s2;
//getline(cin, s3);

//입력값:abc(space)def(enter)
//ghij(enter)
//kln(enter)


//결과값
//s1 = "abc(space)def"까지, s2 = "ghij",그런데 enter전에 커서가 가있음
//s3 = " "을 출력(kln을 출력하지 않음)
