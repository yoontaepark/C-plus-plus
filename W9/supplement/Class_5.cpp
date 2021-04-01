// 생성자의 위임 (recur랑 비슷하게 구동함)

#include <iostream>
using namespace std;

class Time {
public:
	int h;
	int m;
	int s;

	//생성자, 클래스 변수와 동일한 변수를 선언 + 오버로딩으로 표현하기 (시/분/초 의 경우)
	//입력을 한개만 했을 때 초, 두개하면 분, 세개하면 시 하고 싶으면
	// 초, 분/초, 시/분/초 로 생성자를 오버로딩으로 만들기 
	Time() : h(0), m(0), s(0) {}
	Time(int s_) : Time() { 
		s = s_;
	}
	Time(int m_, int s_) : Time(s_) { // 근데, 오버로딩 시 중복되는 부분이 있다면 이렇게 합쳐서 표현이 가능(★이게 생성자의 위임임)
		m = m_;
	}
	//원래같으면 아래처럼 길게 표현
	//Time(int m_, int s_) {
	//	m = m_;
	//	s = s_;
	//}

	Time(int h_, int m_, int s_) : Time(m_, s_) { // 근데, 오버로딩 시 중복되는 부분이 있다면 이렇게 합쳐서 표현이 가능
		h = h_;
	}
};


int main() {
	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(2, 42, 15);

	cout << "t1: " << t1.h << ":" << t1.m << ":" << t1.s << endl;
	cout << "t2: " << t2.h << ":" << t2.m << ":" << t2.s << endl;
	cout << "t3: " << t3.h << ":" << t3.m << ":" << t3.s << endl;
	cout << "t4: " << t4.h << ":" << t4.m << ":" << t4.s << endl;


	return 0;
}