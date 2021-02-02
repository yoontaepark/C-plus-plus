#include <iostream>
using namespace std;


const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

double real_num = 0.0;
int select_num = 0;
int result_num = 0;

int main()
{
	
	cout << "Please enter a Real number:" << endl;
	cin >> real_num;
	cout << "Choose your rounding method:\n1.Floor round\n2.Ceiling round \n3.Round to the nearest whole number"<<endl;
	cin >> select_num;
	
	switch(select_num)
	{
		case 1:
			result_num = int(real_num);
			cout << result_num << endl;
			break;
		case 2:
			result_num = int(real_num) + 1;
			cout << result_num << endl;
			break;
		case 3:
			if (real_num - int(real_num) >= 0.5)
			{
				result_num = int(real_num)+ 1;
				cout << result_num << endl;
			}
			else
			{
				result_num = int(real_num);
				cout << result_num << endl;
			}
			break;
						
	}

	return 0;
}