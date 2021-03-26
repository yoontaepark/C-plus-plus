//typedef 

#include <stdio.h>

int main()
{
	// 기본개념, typedef 하고 자료형 넣고 변수명 정해주면 된다. 
	typedef int sample;
	sample n = 20;

	//배열을 선언하기, 선언한 후에는 변수명만 빼서 가져오기(배열이건 포인터건) 
	typedef int Pair[2];
	Pair point = { 3,4 }; // int point[2] = {3, 4}, 선언할때는 Pair만 가져오기(배열까지는 가져오지 말기) 

	//포인터를 선언하기
	typedef char *Sentence;
	Sentence name = "Yoon"; //char *name = "Yoon", 속성->C/C++->언어->준수->아니오 로 바꿔준다.

	return 0;
}