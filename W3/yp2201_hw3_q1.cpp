#include <iostream>
using namespace std;

int main()
{
	int p_first = 0;
	int p_second = 0;
	char card;
	double tax = 0;

	double base_price = 0;
	double promo_price = 0;
	double a_price = 0;
	double t_price = 0;

	cout << "Enter price of first item: ";
	cin >> p_first;

	cout << "Enter price of second item: ";
	cin >> p_second;

	cout << "Does customer have a club card? (Y/N): ";
	cin >> card;

	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
	cin >> tax;

	base_price = double(p_first) + double(p_second);
	
	if (p_first >= p_second)
		promo_price = p_first + (0.5 * p_second);
	else
		promo_price = (0.5 * p_first) + p_second;

	if ((card == 'Y') || (card == 'y'))
		a_price = promo_price * 0.9;
	else if ((card == 'N') || (card == 'n'))
		a_price = promo_price;
	else
		a_price = promo_price;

	t_price = a_price * (1 + (tax/100));

	cout << "Base price: " << base_price << endl;
	cout << "Price after discounts: " << a_price << endl;
	cout << fixed;
	cout.precision(5); //to make total price xx.xxxxx
	cout << "Total price: " << t_price << endl;

	return 0;
}