#include <iostream>
using namespace std;

int main()
{
	int c = 0;
	bool ask = true;
	while (ask){
		cout << "Input temperature:\n";
		cin >> c;
		int f = c * 9 / 5 + 32;
		cout << f << endl;
		if (c == -40) {
			ask = false;
		}
	}
	return 0;
}