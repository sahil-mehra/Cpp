#include <iostream>

using namespace std;

int main() {
	// int x;
	// cin >> x;
	//  // while (x != 0) {
	// 	if (x >= 1) {
	// 		for (int i = 0; i <= x; i++) {
	// 			/**if (i % 7 == 0) {
	// 				i++;
	// 			} else if (i % 11 == 0) {
	// 				i--;

	// 			**/
	// 			cout << i << endl;

	// 			if (i == x) {
	// 				break;
	// 			}

	// 		}
	// 	} else if (x < 0) {
	// 		for (int i = 0; i <= x; i--) {
	// 			if (i % 7 == 0 || i % 11 == 0) {
	// 				i++;
	// 			}
	// 			cout << i;
	// 		}
	// 	}
	// }
	int x = 0;
	bool ask = true;
	while (ask) {
		cout << "Enter number: ";
		cin >> x;
		if (x == 0) {
			cout << "Goodbye!" << endl;
			ask = false;
		} else if (x > 0) {
			for (int i = 0; i < x; i++) {
				if (i % 7 == 0 || i % 11 == 0) {
					continue;
				}
				cout << i << endl;
			}
		} else {
			for (int i = 0; i > x; i--) {
				if (i % 7 == 0 || i % 11 == 0) {
					continue;
				}
				cout << i << endl;
			}
		}
	}

	return 0;
}
