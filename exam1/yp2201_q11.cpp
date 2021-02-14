#include <iostream>
using namespace std;

int main()
{
    char inLetter;
    char up_letter;
    int i, j, k, temp;

    cout << "Please enter a lower-case letter:" << endl;
    cin >> inLetter;

    int n = int(int(inLetter) - 'a');
   
    inLetter = 'a';
  
    for (i = 1; i <= n + 1; i++)
    {
        for (j = 1; j <= n+1-i; j++)
            cout << " ";
        for (k = 1; k <= (2 * i - 1); k++)
        {
            if ((i % 2) == 0)
            {
                up_letter = char(int('A' + (i-1)));
                cout << up_letter;
            }
            else
                cout << inLetter;
        }
        inLetter++;
     
     cout << endl;
    }

    return 0;
}