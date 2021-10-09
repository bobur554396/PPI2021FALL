#include <iostream>

using namespace std;

string word = "kbtu"; // Global variable

void greeting(string n){
  cout << "hi " << n << "!\n"; 
}

int main(){ // Main function
  
  string name; // local variable
  cout << "Enter your name...\n";
  cin >> name;

  greeting(name);

  cout << word << endl;


  return 0;
}