#include <iostream>

using namespace std;

void hello(){ // our created function
  cout << "hi - this message from void function\n";
}

int main(){ // Main function
  cout << "Main function started...\n";  

  hello(); // function calling 

  cout << "Main function ended...\n";  
  return 0;
}