#include <iostream>

using namespace std;

int main(){
  // - [ ] infinity loop,  break / continue
  
  int n = 0;
  for( ; ; ){
    n++;
    if (n == 1000)
      break;
    cout << "n = " << n << endl;
  }

  return 0;
}