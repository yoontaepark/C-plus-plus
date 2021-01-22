#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7; //고정값을 설정(전역변수로 선언)
int main()
{
	int daysTraveled;
	int fullweeks, remainingDays;

	cout << "Please enter number of days you traveled:" << endl;
	cin >> daysTraveled;

	fullweeks = daysTraveled / DAYS_IN_A_WEEK;   //몫이 나옴
	remainingDays = daysTraveled % DAYS_IN_A_WEEK; //나머지가 나옴

	cout << daysTraveled << " days are " << fullweeks << " weeks and " << remainingDays << " days" << endl;

	return 0;
}