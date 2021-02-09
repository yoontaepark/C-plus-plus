#include <iostream>

using namespace std;

int main()
{
	srand(time(0));

	int count = 5;
	int startnum = 1;
	int endnum = 100;
	int guessnum = 0;

	int x = (rand() % 100) + 1;

	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;


	while (count > 0)
	{
		cout << "Range: [" << startnum << ", " << endnum << "], Number of guesses left: " << count << endl;
		cout << "Your guess: ";
		cin >> guessnum;


		if (guessnum > x)
		{
			if (count == 1)
			{
				cout << "Out of guesses! My number is " << x << endl;
				break;
			}
			else
			{
				cout << "Wrong! My number is smaller." << endl;
				if (endnum > guessnum)
					endnum = guessnum - 1;
				count--;
			}
		}
		else if (guessnum < x)
		{
			if (count == 1)
			{
				cout << "Out of guesses! My number is " << x << endl;
				break;
			}
			else
			{
				cout << "Wrong! My number is bigger." << endl;
				if (startnum < guessnum)
					startnum = guessnum + 1;
				count--;
			}
		}

		else if (guessnum == x)
		{
			cout << "Congrats! You guessed my number in " << (5 - count + 1) << " guesses." << endl;
			break;
		}

		else if (count == 0)
		{
			cout << "Out of guesses! My number is " << x << endl;
			break;
		}
		cout << endl;
	}
	return 0;
}