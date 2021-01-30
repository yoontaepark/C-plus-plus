#include <iostream>
using namespace std;

// 두가지 성적중 하나라도 60점 미만이면 낙제, 두 과목 모두 95점 이상이면 우수졸업, 아니면 그냥 졸업

int main()
{
	int grade1, grade2 = 0;

	cout << "Please enter two grades, seperated by a space:" << endl;
	cin >> grade1 >> grade2;

	//하나라도 = or 조건으로, grade1 || grade2 < 60 은 ()이 boolean이어야 하는데 boolean을 두번하는셈(권장x) 
	if ((grade1 < 60) || (grade2 < 60))
	{
		cout << "Student failed :(" << endl;
	}
	// 둘다 95점을 넘어야 하기 때문에, and 조건을 써야 한다
	else if ((grade1 >= 95) && (grade2 >= 95))
	{
		cout << "Student graduated with honors!!!" << endl;
	}
	else
		cout << "Student graduated" << endl;

	return 0;
}