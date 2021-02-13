//To make a combination

#include <iostream>
using namespace std;

int main()
{

	int n, k, i, nFact, kFact, n_kFact, k_comb;
	cout << "Please enter n and k (n>=k):" << endl;
	cin >> n >> k;

	nFact = 1;
	for (i = 1; i <= n; i++)
		nFact *= i;

	kFact = 1;
	for (i = 1; i <= k; i++)
		kFact *= i;

	n_kFact = 1;
	for (i = 1; i <= n-k; i++)
		n_kFact *= i;

	k_comb = nFact / (kFact * n_kFact); //it is an integer, not a double. 
	cout << n << " choose " << k << " is " << k_comb << endl;

	return 0;
}