// Class 
#include <iostream>
using namespace std;

class Date 
{
// 값 고정, 못바꿈(default가 private라서 따로 명시하지 않아도 되긴 함)
private:
	int day;
	int month;
	int year;

// 값 변경가능, 초기화하는 방법은 아래와 같이 한줄로 해도 되고
public:
	Date() : day(1), month(1), year(1970) {}  

// 아래처럼 중괄호 넣고 한줄씩 넣어도 된다. 
//public:
//	Date()
//	{
//		day = 1;
//		month = 1;
//		year = 1970;
//	}
//};

// 참고:
// Some operators cannot be overloaded: ., ::, *., sizeof, ?:
// Some can only be overloaded as a memeber: =, []
// Some, almost, cannot be overloaded as a member: <<, >>

// 참고2: 
// Three problem, Big 3 solution. 3가지 기능은 하나가 필요할 경우 3가지가 모두 같이 필요함
// Destructor: Called automatically when the object falls out of scope - 삭제
// Copy Constructor: Constructs an object based on an existing one - 약복사
// Assignment Operator: Copies one object to another (deep copy) - 강복사