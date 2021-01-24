#define _USE_MATH_DEFINES //this should also be typed to use PI (in cmath)
#include <cmath>  //library to be added for using PI 
#include <iostream> //note that above two lines should be typed first(sequence makes an error)
using namespace std;

// const double PI = 3.14; would be used if cmath library is not used
int main()
{
	double radius, area;

	cout << "Please enter the radius:" << endl;
	cin >> radius;

	area = M_PI * (radius * radius);

	cout << "The are of a circle with radius of " << radius << " is " << area << endl;

	return 0;
}