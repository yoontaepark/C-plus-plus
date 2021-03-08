#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstString;
	string secondString;

	int i, j;
	int count_i[26] = { 0 };
	int count_j[26] = { 0 };

	cout << "Please enter the first string:" << endl;
	getline(cin, firstString);	

	cout << "Please enter the second string:" << endl;
	getline(cin, secondString);

	for (i = 0; i < firstString.length(); i++)
	{
		if (firstString[i] >= 'a' && firstString[i] <= 'z')
			count_i[firstString[i] - 'a']++;
		if (firstString[i] >= 'A' && firstString[i] <= 'Z')
			count_i[firstString[i] - 'A']++;
	}

	for (j = 0; j < secondString.length(); j++)
	{
		if (secondString[j] >= 'a' && secondString[j] <= 'z')
			count_j[secondString[j] - 'a']++;
		if (secondString[j] >= 'A' && secondString[j] <= 'Z')
			count_j[secondString[j] - 'A']++;
	}

	bool countCompare = false;

	for (i = 0; i < 26; i++)
	{
		if (count_i[i] != count_j[i])
		{
			countCompare = false;
			cout << "Two strings are NOT anagrams!" << endl;
			break;
		}
		else
			countCompare = true;
	}

	if(countCompare == true)
		cout << "Two strings are anagrams!" << endl;

	return 0;
}