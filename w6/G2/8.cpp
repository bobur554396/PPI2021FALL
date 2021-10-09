#include <iostream>

using namespace std;

void greeting(string n);

int main(){ // Main function
  
  string name; // local variable
  cout << "Enter your name...\n";
  cin >> name;

  greeting(name);

  return 0;
}

void greeting(string n){
  cout << "hi " << n << "!\n"; 
}