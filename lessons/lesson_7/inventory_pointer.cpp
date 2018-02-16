#include <iostream>
#include <string>
#include <vector>

using namespace std;

string* ptrToElement(vector<string>* const pVec, int i);

int main() {
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "Sending the object pointed to by returned pointer:\n";
	cout << *(ptrToElement(&inventory, 0)) << "\n\n";

	cout << "Assigning the returned pointer to another pointer.\n";
	string* pStr = ptrToElement(&inventory, 1);
	cout << "Sending the object pointed to by new pointer to cout: \n";
	cout << *pStr << "\n\n";

	cout << "Altering an object through a returned pointer.\n";
	*pStr = "Healing an object through a returned pointer.\n";
	cout << "Sending the altered object to cout:\n";
	cout << inventory[1] << endl;

	return 0;
}

string* ptrToElement(vector<string>* const pVec, int i) {
	return &((*pVec)[i]);
}