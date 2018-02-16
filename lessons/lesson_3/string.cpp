// String Tester
// Demonstrates string objects

#include <iostream>
#include <string>

using namespace std;

int main(){
  string word1 = "Game";
  strinf word2("Over");
  string word3(3, '!');

  string phrase = word1 + word2 + word3;
  cout << "The phrase is: " << phrase << "\n\n";

  cout << "The phrase has " << phrase.size() << " characters in it.\n\n";

  cout << "The charater at position 0 is: " << phrase[0] << "\n\n";

  cout << "Changing the character at position 0.\n";
  phrase[0] = 'L';
  cout << "The phrase is now: " << phrase << "\n\n";


