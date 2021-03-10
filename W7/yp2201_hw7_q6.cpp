#include <iostream>
#include <vector>
using namespace std;

int main1();
int* createNumArr(int& outNumArrSize);

int main2();
vector<int> createNumVector();


int main()
{
	cout << "[Testing main1]" << endl;
	main1();
	cout << endl << endl << "[Testing main2]" << endl;
	main2();	
	
	return 0;
}


int main1()
{
	int outNumArrSize;
	int searchNum;

	int* numArr = createNumArr(outNumArrSize);
	cout << "Please enter a number you want to search" << endl;
	cin >> searchNum;
	cout << searchNum << " shows in line(s) ";

	for (int i = 0; i < outNumArrSize; i++)
	{
		if (numArr[i] == searchNum)
			cout << i + 1 << " ";
	}

	delete[] numArr;
	return 0;
}

int* createNumArr(int& outNumArrSize)
{
	int num = 0;
	int* numArr = new int [1];
	bool numCheck;
	int	numArrSize = 0;
	int numArrPhysicalSize = 1;

	cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
	cout << "End your input by typing -1." << endl;

	numCheck = false;
	while (numCheck == false)
	{
		cin >> num;
		if (num == -1)
			numCheck = true;
		else
		{
			if (numArrSize == numArrPhysicalSize) 
			{
				int* newNumArr;
				newNumArr = new int[2.0 * numArrPhysicalSize];

				for (int i = 0; i < numArrSize; i++)
					newNumArr[i] = numArr[i];

				delete[] numArr;

				numArr = newNumArr;
				numArrPhysicalSize *= 2;
			}
			numArr[numArrSize] = num; 
			numArrSize++;
		}
	}
	outNumArrSize = numArrSize;
	return numArr;
}


int main2()
{
	int searchNum;

	vector<int> numsVector = createNumVector();
	cout << "Please enter a number you want to search" << endl;
	cin >> searchNum;
	cout << searchNum << " shows in line(s) ";

	for (int i = 0; i < numsVector.size(); i++)
	{
		if (numsVector[i] == searchNum)
			cout << i + 1 << " ";
	}

	return 0;
}

vector<int> createNumVector()
{
	vector<int> numsVector;
	bool numCheck;
	int num = 0;

	cout << "Please enter a sequence of positive integers, each in a separate line." << endl;
	cout << "End your input by typing -1." << endl;

	numCheck = false;
	while (numCheck == false)
	{
		cin >> num;
		if (num == -1)
			numCheck = true;
		else
			numsVector.push_back(num);
	}
	return numsVector;
}