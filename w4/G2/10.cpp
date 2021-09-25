#include <iostream>

using namespace std;

int main(){
  /*
  Nested loop
  */

  for(int i = 0; i < 3; i++){ // rows
    for(int j = 0; j < 4; j++){ // columns
      cout << i << j << " ";
    }
    cout << endl;
  }
  
  return 0;
}