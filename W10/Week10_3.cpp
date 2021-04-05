//File Processing
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void openInputFile(ifstream& inFile);

int main() {
	
	//파일입력하기, ofstream 씀  
	ofstream outFile; // == ofstream outFile("outfile.txt")
	outFile.open("outfile.txt"); //없다면 파일이 생성됨
	outFile << "Hello, world! muyaho!" << endl; //ofstream 자료형에 문구를 넣으면 추가됨 

	//파일출력하기, input1.txt 파일이 있다고 가정
	ifstream inFile;
	openInputFile(inFile);
	vector<int> v;
	int temp;
	while (inFile >> temp) { //inFile을 읽어서, 정수형이 아닐때까지 반복한다. input operater: >> 를 써서 빈칸 스킵 
		v.push_back(temp); //push_back: vector 끝에 요소를 추가, 결국 vector에 정수가 쭉 저장이 됨 
	}

	double sum = 0;
	for (int item : v) //범위기반 for문, 변수 item에 v배열의 요소값을 하나씩 실행
		sum += item;

	cout << "The average of the integers in the file is: " << sum / v.size() << endl;
}

//파일출력함수, inFile의 값을 입력한 후, 실제 값이 변경되어야 하므로 call by reference를 쓴다. 
void openInputFile(ifstream& inFile) {
	string filename;
	cout << "What filename? ";
	cin >> filename;
	inFile.open(filename);
	while (!inFile) { //inFile이 아니라면 == inFile이 실행되지 않는다면
		cout << "File failed to open!" << endl;
		cout << "What filename? ";
		cin >> filename;
		inFile.clear();  //파일출력이 안되었더라도, 파일을 오픈한 기록이 남기때문에 해당부분 삭제한 후 
		inFile.open(filename); //재시도
	}
}