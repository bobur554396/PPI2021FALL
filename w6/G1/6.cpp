#include <iostream>
#include <string>

using namespace std;

void hello(){
  cout << "hi - from void function\n";
}

void greeting(string name){
  cout << "hi " << name << "!" << endl;
}


int main(){ // Main function
  
  string n;
  cout << "Enter your name...\n";
  cin >> n;

  greeting(n);

  cout << n.front() << " " << n.back() << endl;

  return 0;
}