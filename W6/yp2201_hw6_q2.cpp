#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);


int main()
{
	string word;	

	cout << "Please enter a word:";
	cin >> word;
	

	if(isPalindrome(word) == true)
		cout << word << " is a palindrome" << endl;
	else
		cout << word << " is not a palindrome" << endl;



	return 0;
}

bool isPalindrome(string str)
{
	int i, n;
		
	n = str.length();

	for (i = 0; i < n; i++)
	{
		if (str[i] != str[double(n) - i - 1])
			return false;
		else
			return true;
	}



}