#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	const int MAX_SIZE = 10;
	int num_Arry[MAX_SIZE] = {0,0,0,0,0,0,0,0,0,0};

	int i;
	string guess_Arry;

	cout << "Please enter your PIN according to the following mapping:" << endl;
	cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
	
	srand(time(0));
	cout << "NUM: ";
	for (i = 0; i < MAX_SIZE; i++)
	{		
		num_Arry[i] = (rand() % 3) + 1;
		cout << num_Arry[i] << " ";
	}
	cout << endl;

	for (i = 0; i < MAX_SIZE; i++)
		num_Arry[i] += 48;

	cin >> guess_Arry;

	if((guess_Arry[0] == num_Arry[1]) && (guess_Arry[1] == num_Arry[2]) && (guess_Arry[2] == num_Arry[3]) && (guess_Arry[3] == num_Arry[4]) && (guess_Arry[4] == num_Arry[5]))
		cout << "Your PIN is correct" << endl;
	else
		cout << "Your PIN is not correct" << endl;


	return 0;
}