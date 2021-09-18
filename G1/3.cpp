#include <iostream>

using namespace std;

int main(){
  // - [ ] loop operators: for, while, do while
  
  /*
    for(initialize iterator; condition; inc/dec iterator){
      expression / instructions
    } 
  */

  // i += 5 => i = i + 5
  for(int i = 0; i <= 20; i += 5){
    cout << i << " ";
  }

  return 0;
}