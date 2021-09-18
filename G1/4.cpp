#include <iostream>

using namespace std;

int main(){
  // - [ ] loop operators: for, while, do while
  
  /*
    for(initialize iterator; condition; inc/dec iterator){
      expression / instructions
    } 
  */

  
  for(int i = 20; i >= 0; i = i - 1){
    if(i % 2 == 1)
      cout << i << " ";
  }

  return 0;
}