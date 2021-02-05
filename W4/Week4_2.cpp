#include <iostream>
using namespace std;

int main()
{
	int numOfstudents;
	int count;
	int curr, sum;
	double average;

	cout << "Please enter the number of students in class" << endl;
	cin >> numOfstudents;

	cout << "Enter the students' grades (separate by a space)" << endl;

	sum = 0;
	//for: 보통 얼마나 반복할지 알때 사용함
	for (count = 1; count <= numOfstudents; count++)
	{
		cin >> curr;
		sum += curr;
	}

	average = (double)sum / (double)numOfstudents;

	cout << "The average is " << average << endl;

	return 0;
}