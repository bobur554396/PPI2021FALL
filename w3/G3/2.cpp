#include <iostream>

using namespace std;

int main(){
  // - [ ] loop operators: for, while, do while

  /*
    for(intialize iterator; condition; inc/dec interator) {
      expression / instruction;
    }
  */

  for(int i = 0; i <= 20; i++){
    if(i % 2 == 0)
      cout << i << " ";
  }


  return 0;
}