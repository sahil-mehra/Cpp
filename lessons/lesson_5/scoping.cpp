//Scoping
//Demonstrates scopes

#include <iostream>

using namespace std;

void func();

int main() {
  int var = ;
  cout << "In main() var is: " << var << "\n\n";

  func();
  cout << "Back in main() var is: " << var << "\n\n"; {
    cout << "In main() in a new scope var is: " << var << "\n\n";

    cout << "Creating new var in new scope.\n";
    int var = 10;
    cout << "In main() in a new scope var is: " << var << "\n\n";
  }
  cout << "At the end of main() var created in a new scope no longer exists.\n";
  cout << "At the end of main() var is: " << var << "\n";

  return 0;
}

void func() {
  int var = -5;
  cout << "In func() var is: " << var << "\n\n";
}
