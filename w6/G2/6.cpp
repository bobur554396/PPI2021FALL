#include <iostream>

using namespace std;

void greeting(string n){
  cout << "hi " << n << "!\n"; 
}

int main(){ // Main function
  
  string name;
  cout << "Enter your name...\n";
  cin >> name;

  greeting(name);


  return 0;
}