// 클래스 = 자료 저장 + 자료 처리 = 변수 + 함수
// 클래스(타입): 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 툴(자료형)
// 객체(오브젝트): 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간)

#include <iostream>
using namespace std;

// 지시자: private, protected, public 
//★ struct: 기본적으로 public임 (private 구분 필요) 
//★★ class : 기본적으로 private임 (public 구분 필요)

class TV { 
//private: //private 안에 있는 변수들은 main함수에서 변수자체로 직접 못건듬 
	bool powerOn;
	int channel;
	int volume;

public: //public 안에 함수형태로 조건을 줘서 위의 private 변수들을 제어 
	void on() {
		powerOn = true;
		cout << "TV를 켰습니다." << endl;
	}

	void off() {
		powerOn = false;
		cout << "TV를 껐습니다." << endl;
	}

	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999){
			channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다." << endl;
		}
	}

	// 1. volume 값이 0~100사이인데 튈 수 있으니 함수로 제어
	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "볼륨을 " << vol << "(으)로 바꿨습니다." << endl;
		}
	}
};

int main()
{
	TV lg;
	lg.on();
	lg.setChannel(10);
	lg.setVolume(50);
	lg.setChannel(-73); //이건 아예 작동을 안함, 이렇게 private 변수를 막을 수 있다. 


	//lg.powerOn = true;
	//lg.channel = 10;
	//lg.setVolume(50); //1. 이런식으로 함수로 제어할수는 있겠지만
	//lg.volume = 400;  //1. 아래처럼 다시 volume이라는 변수를 직접 사용하면 제어가 안된다. 

	return 0;
}