#include <iostream>

using namespace std;

void hello(){
  for(int i = 0; i < 5; i++)
    cout << i << " = hi - from hello function\n";
}

void greeting(string name){
  cout << "hi " << name << "!\n";
}

int main(){ // Main functions
  cout << "Main function started...\n";

  hello(); // function calling

  cout << "Enter your name...\n";
  string name;
  cin >> name;

  greeting(name);
  

  cout << "Main function ended...\n";
  return 0;
}