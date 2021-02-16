#include <iostream>
using namespace std;

bool yoon_year;

void printYearCalender(int year, int& startingDay);
int printMonthCalender(int numOfDays, int& startingDay);
bool leap_year(int year);


int main()
{
	int myYear, myStart;

	cout << "Please enter Year that you want to print: ";
	cin >> myYear;
	cout << "Please enter Starting day that you want to print: ";
	cin >> myStart;
	cout << endl;

	yoon_year = leap_year(myYear);
	printYearCalender(myYear, myStart);

	return 0;
}



void printYearCalender(int year, int& startingDay)
{
	for (int i = 1; i <= 12; i++)
	{
		if (i == 1)
		{
			cout << "January " << year << endl;
			printMonthCalender(31, startingDay); 
			cout << endl;
		}
		else if (i == 2)
		{
			cout << endl << "February " << year << endl;
			if (yoon_year == 1)
			{
				printMonthCalender(29, startingDay);
				cout << endl;
			}
			else
			{
				printMonthCalender(28, startingDay);
				cout << endl;
			}
		}
		else if (i == 3)
		{
			cout << endl << "March " << year << endl;
			printMonthCalender(31, startingDay);
			cout << endl;
		}
		else if (i == 4)
		{
			cout << endl << "April " << year << endl;
			printMonthCalender(30, startingDay);
			cout << endl;
		}
		else if (i == 5)
		{
			cout << endl << "May " << year << endl;
			printMonthCalender(31, startingDay);
			cout << endl;
		}
		else if (i == 6)
		{
			cout << endl << "June " << year << endl;
			printMonthCalender(30, startingDay);
			cout << endl;
		}
		else if (i == 7)
		{
			cout << endl << "July " << year << endl;
			printMonthCalender(31, startingDay);
			cout << endl;
		}
		else if (i == 8)
		{
			cout << endl << "August " << year << endl;
			printMonthCalender(31, startingDay);
			cout << endl;
		}
		else if (i == 9)
		{
			cout << endl << "September " << year << endl;
			printMonthCalender(30, startingDay);
			cout << endl;
		}
		else if (i == 10)
		{
			cout << endl << "October " << year << endl;
			printMonthCalender(31, startingDay);
			cout << endl;
		}
		else if (i == 11)
		{
			cout << endl << "November " << year << endl;
			printMonthCalender(30, startingDay);
			cout << endl;
		}
		else if (i == 12)
		{
			cout << endl << "December " << year << endl;
			printMonthCalender(31, startingDay);
			cout << endl;
		}
	}
}


int printMonthCalender(int numOfDays, int& startingDay)
{
	cout << "Mon\tTue\tWed\tThr\tFri\tSat\tSun" << endl;
	for (int k = 1; k < startingDay; k++)
		cout << '\t';
	
	for (int day = 1; day <= numOfDays; day++)
	{
		cout << day << '\t';	
		startingDay++;
		if (startingDay == 8)
		{
			startingDay = 1;
			cout << endl;
		}
		
	}	
	return startingDay;
}
	

bool leap_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return true;
	else
		return false;
}


