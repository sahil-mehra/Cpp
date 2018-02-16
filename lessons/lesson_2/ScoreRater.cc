
#include <iostream>
using namespace std;

int main() {
	int x = 0;
	cout << "Enter a numner: ";
	cin >> x;

	if (x > 0) {
		for (int i = 0; i < x; i++) {
			cout << i  << endl;
		}
	} else if (x < 0) {
		for (int i = 0; i > x; i--) {
			cout << i << endl;
		}
	} else {
		cout << "Nothing to do!" << endl;
	}
	return 0; 
}