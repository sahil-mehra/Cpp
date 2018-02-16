#include <iostream>
using namespace std;

int main()
{
	for (int i = 6; i > 0; i--){
			for (int j = 0;j >= 0;j--){
				cout << " ";
			}
			for (int l = 0; l < i; l++){
				cout << l + 1;
			}
		cout << endl;
	}
	return 0;
}