#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int i;

int main()
{
	string line_of_text;

	cout << "Please enter a line of text:" << endl;
	getline(cin, line_of_text);

	
	for (i = 0; i < line_of_text.length(); i++)
	{
		if (((line_of_text[i] >= '0') && (line_of_text[i] <= '9')) && ((line_of_text[i-1.0] == '32') || ((line_of_text[i-1.0] >= '0') && (line_of_text[i-1.0] <= '9')))
			&& ((line_of_text[i+1.0] == '32') || ((line_of_text[i+1.0] >= '0') && (line_of_text[i+1.0] <= '9'))))
			line_of_text[i] = 'x';
	}
	cout << line_of_text << endl;

	return 0;
}