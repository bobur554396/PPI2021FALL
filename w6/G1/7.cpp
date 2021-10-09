#include <iostream>

using namespace std;

void greeting(string name); // Declaring the function

int main(){ // Main function
  
  string n;
  cout << "Enter your name...\n";
  cin >> n;

  greeting(n);


  return 0;
}

void greeting(string name){ // Implementation of the function
  cout << "hi " << name << "!" << endl;
}