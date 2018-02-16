#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 6; i++) {
		for (int j = 6; j > 0; j--) {
			if (j - i >= 2) {
				cout << "  ";
			} else {
				 cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
