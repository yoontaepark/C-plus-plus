//getline함수: 빈칸 포함해서 쭉 다 읽는 함수 
//ignore, 원하는 만큼 글자를 스킵한다. inFile.ignore(9999,'\m'), 9999글자 스킵

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void openInputFile(ifstream& inFile);

struct Student {
	int id;
	double testScore;
	string name;
};

int main()
{
	ifstream inFile; //파일을 불러오기 위한 자료형 정의
	openInputFile(inFile); //파일불러오기
	vector<Student> vs; //vs라는 Student 구조체 벡터 정의 <- temp 구조체에서 벡터로 다 넣을거임
	Student temp; //temp라는 Student 구조체 정의
	
	while (inFile >> temp.id) {//id를 하나씩 읽어감
		inFile >> temp.testScore; //파일 읽기, 이 경우 testScore을 읽음
		inFile.ignore(9999, '\t'); //9999개 만큼 글자를 스킵하거나, 탭만큼 글자를 스킵한다. 
		getline(inFile, temp.name); //string형은 getline으로 띄어쓰기 포함 다 읽어들일 수 있다. 
		vs.push_back(temp); //temp 구조체에 해당했던 내용을 모두 vs 벡터에 넣는다
	}
	cout << "Students with test scores over 90: " << endl;
	for (Student s : vs) { //vs 벡터를 하나씩 쭉 읽으면서 
		if (s.testScore > 90)
			cout << s.name << endl; // 90점 초과라면 이름을 출력한다. 
	}

	return 0;
}

//파일 열때 안열리면 if문처럼 걸어두는 함수임 
void openInputFile(ifstream& inFile) {
	string filename;
	cout << "What filename? ";
	cin >> filename;
	inFile.open(filename); //파일 열고 읽기
	while (!inFile) { //inFile이 아니라면 == inFile이 실행되지 않는다면
		cout << "File failed to open!" << endl;
		cout << "What filename? ";
		cin >> filename;
		inFile.clear();  //파일출력이 안되었더라도, 파일을 오픈한 기록이 남기때문에 해당부분 삭제한 후 
		inFile.open(filename); //재시도
	}
}