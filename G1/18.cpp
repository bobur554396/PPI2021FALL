#include <iostream>

using namespace std;

int main(){
  // While loop

  /*
    for(initialize iterator; condition; inc/dec iterator){
      expression / instructions
    } 
  */
  
  /*

    initialize iterator;
    while(condition){
      expression / instructions;

      inc/dec iterator;
    }
  */

  int i = 0;
  while(i < 20){
    if(i % 3 == 0)
      cout << i << " ";
    
    i++;
  }

  return 0;
}