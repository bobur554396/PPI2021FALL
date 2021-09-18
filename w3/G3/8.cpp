#include <iostream>

using namespace std;

int main(){
  // - [ ] fibonacci sequence (0, 1, 1, 2, 3, 5, next = prev1 + prev2)
  // Your are given number N. Show first N elements of the fibonacci sequence.
  // 5
  // 0  1  1  2  3
  int n;
  cin >> n;

  /*
  1)   0    1    n1 + n2
       n1   n2    next 
  
  2)   0    1    1    ??
            n1   n2  next 

  */

  int n1 = 0, n2 = 1;

  for(int i = 0; i < n; i++){
    if(i < 2){
      cout << i << " ";
    } else {
      int next = n1 + n2;
      cout << next << " ";
      n1 = n2;
      n2 = next;
    }
  }

  return 0;
}