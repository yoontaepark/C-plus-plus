#include <iostream>
using namespace std;
// Class 추가 
// 생성자: 멤버 변수 초기화

class Complex {
private:
	double real; //멤버 변수
	double imag;

public:
	Complex() { //생성자 
		real = 0;
		imag = 0;
	}
	
	Complex(double real_, double imag_ = 0) { //생성자는 오버로딩이 가능하다, default 매개변수도 설정 가능 
		real = real_;
		imag = imag_;
	}
	
	////생성자는 아래와 같이 표현도 가능하다
	//Complex() : real(0), imag(0) {}
	//Complex(double real_, double imag_) :real(real_), imag(imag_) {}

	//// 이경우 : 자리엔 멤버가 들어가기때문에 매개변수와 멤버변수명을 동일하게 지정해도 에러가 안난다. 
	//Complex(double real, double imag) :real(real), imag(imag) {} 

	double getReal() {
		return real;
	}

	void setReal(double real_) {
		real = real_;
	}

	double getImag() {
		return imag;
	}

	void setImag(double imag_) {
		imag = imag_;
	}
};

int main() {
	//이 경우 c1은 첫번째 함수를 타고 (0,0)을 저장함
	Complex c1;

	//c2 == c3로 표현만 다른 경우이며, 두번째 함수를 타고 (2,3)을 저장함
	Complex c2 = Complex(2);
	Complex c3(2, 3);
	
	// {}도 사용할 수 있음(위의 ()와 동일한 결과값)
	Complex c4 = { 2,3 };
	Complex c5 = Complex{ 2,3 };
	Complex c6{ 2,3 };

	cout << "c1 = " << c1.getReal() << ", " << c1.getImag() << endl;
	cout << "c2 = " << c2.getReal() << ", " << c2.getImag() << endl;
	cout << "c3 = " << c3.getReal() << ", " << c3.getImag() << endl;

	return 0;
}