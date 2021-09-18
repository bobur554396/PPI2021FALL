#include <iostream>

using namespace std;

int main(){
  // - [ ] infinity loop;   break / continue

  int n = 0;
  for( ; ; ){
    n++;
    
    if (n % 2 == 1)
      continue;

    cout << "n = " << n << endl;
    

    if (n == 1000)
      break;
  }

  return 0;
}