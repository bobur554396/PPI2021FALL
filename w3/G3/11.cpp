#include <iostream>

using namespace std;

int main(){
  // - [ ] loop operators: for, while, do while

  /*
    for(intialize iterator; condition; inc/dec interator) {
      expression / instruction;
    }
  */

  /*
    intialize iterator;
    while(condition){
      expression / instruction;

      inc/dec interator;
    }
  */

  int n = 10;
  while(n >= 0){
    cout << n << " ";
    n--;
  }


  return 0;
}