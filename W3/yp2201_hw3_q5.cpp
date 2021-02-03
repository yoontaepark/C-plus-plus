#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

	double w_in_pounds = 0;
	double h_in_inches = 0;
	string w_status;

	const double p_to_k = 0.453592;
	const double i_to_m = 0.0254;

	double BMI = 0;

	cout << "Please enter weight (in pounds): ";
	cin >> w_in_pounds;
	cout << "Please enter height (in inches): ";
	cin >> h_in_inches;

	BMI = (w_in_pounds * p_to_k) / pow((h_in_inches * i_to_m), 2);

	if (BMI < 18.5)
		w_status = "Underweight";
	else if ((BMI >= 18.5) && (BMI < 25))
		w_status = "Normal";
	else if ((BMI >= 25) && (BMI < 30))
		w_status = "Overweight";
	else
		w_status = "Obese";

	cout << "The weight status is: " << w_status << endl;

	return 0;
}