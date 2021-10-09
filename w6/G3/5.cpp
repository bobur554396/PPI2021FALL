#include <iostream>

using namespace std;

void hello(){
  for(int i = 0; i < 100; i++){
    cout << i << " = hi - from hello function\n";
    if(i == 3)
      return;
  }
}

int main(){ // Main functions
  cout << "Main function started...\n";

  hello(); // function calling

  cout << "Main function ended...\n";
  return 0;
}