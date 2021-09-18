#include <iostream>

using namespace std;

int main(){
  // - [ ] loop operators: for, while, do while

  /*
    for(initilize iterator; condition; inc/dec interator){
      expression / instructions
    }
  */
  
  for(int i = 10; i >= 0; i = i - 1){
    cout << i << " ";
  }

  return 0;
}