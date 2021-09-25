#include <iostream>

using namespace std;

int main(){
  /*
  Nested loop
  */

  for(int i = 0; i < 3; i++){
    cout << "i="<< i << "\n";
    for(int j = 0; j < 4; j++){
      cout << j << " ";
    }
    cout << endl;
  }
  
  return 0;
}