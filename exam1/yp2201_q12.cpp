#include <iostream>
using namespace std;

int main()
{

    bool keepgoing = true;
    int day = 1;
    int inches;
    int sum = 0;
    int yard, feet, inch, used_day;

    while (keepgoing == true)
    {
        cout << "Enter the number of inches the snail traveled in day #" << day << endl;
        cout << " or type -1 if they reached their destination:" << endl;
        cin >> inches;
        if (inches == -1)
            keepgoing = false;
        else
        {
            sum += inches;
            day++;
        }
    }

    used_day = day - 1;
    yard = sum / 36;
    feet = (sum % 36) / 12;
    inch = (sum % 36) % 12;


    cout << "In " << used_day << " days, the snail traveled " << yard << " yards, " << feet << " feet and " << inch << " inches." << endl;

    return 0;
}