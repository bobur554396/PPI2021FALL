#include <iostream>

using namespace std;

void hello(){
  cout << "hi - from void function\n";
}

int main(){ // Main function
  cout << "Main function started...\n";

  hello(); // function calling

  cout << "Main function ended...\n";
  return 0;
}