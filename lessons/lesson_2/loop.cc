#include <iostream>
using namespace std;

int main()
{ 
 cout << "Please enter  number" << endl;
 	int x; 
	int sum = 0;
	cin >> x;

 	if (x > 0) {
		for (int i = 0; i <= x; i++) {
			sum = sum + i;
		}
	} else if (x < 0) {
		for (int i = 0; i >= x; i--) {
			sum = sum +i;
		}
	}
	cout << sum << endl;

	return 0;
}