#include <iostream>

using namespace std;

string word = "kbtu"; // Global variable

void greeting(string name); // function declaration

int main(){ // Main functions
  cout << "Enter your name...\n";
  string name; // Local variable
  cin >> name;

  greeting(name);
  
  return 0;
}

void greeting(string _name){
  string res = "hi " + _name + "!\n"; // Local variable
  cout << res;
}
