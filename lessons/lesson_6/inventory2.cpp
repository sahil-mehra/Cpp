#include <iostream>
#include <string>
#include <vector>

using namespace std;
string& refToElement(vector<string>& inventory, int i);

int main() {
	vector<string> inventory; 
	inventory.push_back("sword"); 
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "Sending the returned reference to cout:\n"; 
	cout << refToElement(inventory, 0) << "\n\n";

	cout << "Assigning the returned reference to another reference.\n";
	cout << refToElement(inventory)

	return 0;
}