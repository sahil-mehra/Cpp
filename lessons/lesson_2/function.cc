#include <iostream>
using namespace std;

// Defining a function.
double fahrenheitToCelcius(double f) {
	return (f -32) / 1.8;
}

double celciusToFahrenheit(double c) {
	return c * 1.8 + 32;
}

int main() {
	/**
	Using that function.
	double myNum = fahrenheitToCelcius(6);
	double yourNum = fahrenheitToCelcius(30);
	cout << fahrenheitToCelcius(0) << endl;
	**/

	cout << celciusToFahrenheit(34) << endl;
	return 0;
}