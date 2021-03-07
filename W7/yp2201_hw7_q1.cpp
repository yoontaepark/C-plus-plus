#include <iostream>
#include <string>
using namespace std;

int main()
{
	string textLine;
	int wordCount = 0;
	int i;
	int count[26] = { 0 };

	cout << "Please enter a line of text:" << endl;
	getline(cin, textLine);


	//Word Count 
	for (i = 0; i < textLine.length(); i++)
	{
		if (((textLine[i] >= 'a' && textLine[i] <= 'z') || (textLine[i] >= 'A' && textLine[i] <= 'Z')) && 
			(textLine[i + 1.0] == '.' || textLine[i + 1.0]== ',' || textLine[i + 1.0] == ' '))
			wordCount++;
	}
	cout << wordCount << "\twords" << endl;

	////change uppercase to lowercase
	//for (int i = 0; i < textLine.length(); i++)
	//{
	//	if (textLine[i] >= 'A' && textLine[i] <= 'Z')
	//		textLine[i] = textLine[i] + 32;
	//	cout << textLine[i];
	//}
		
	for (i = 0; i < textLine.length(); i++)
	{
		if (textLine[i] >= 'a' && textLine[i] <= 'z')
			count[textLine[i] - 'a']++;
		if (textLine[i] >= 'A' && textLine[i] <= 'Z')
			count[textLine[i] - 'A']++;
	}

	for (i = 0; i < 26; i++)
	{
		if (count[i] > 0)
			cout << count[i] << "\t" << (char)('a' + i) << endl;
	}

	return 0;
}