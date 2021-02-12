#include <iostream>
using namespace std;

int main()
{
    char inLetter;
    int up_letter;
    int i, j, k;

    cout<< "Please enter a lower-case letter:"<<endl;
    cin>>inLetter;

    int n = int(int(inLetter) - 'a');

    for (i=1; i<=n+1; i++)
    {
        for(j=1; j<=n; j++)
            cout<<" ";
        for(k=1; k<= (2*i-1); k++)
        {
            if(i % 2 == 0)
            {
                up_letter = int('A' + n);
                inLetter = char(up_letter);
                cout<<inLetter;
            }
            else   
                cout<<inLetter;
        }
    cout<<endl;   
    }

    return 0;
}