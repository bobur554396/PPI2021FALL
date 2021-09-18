#include <iostream>

using namespace std;

int main(){
  // - [ ] fibonacci sequence (0, 1, 1, 2, 3, 5, 8, 13, ... next = prev1 + prev2)
  // Show fist N numbers of fibonacci sequence
  // n = 5; res: 0, 1, 1, 2, 3

  /*
    1)
        0    1     1
        n1   n2   next = 0 + 1

    2)
        0    1     1    2
             n1   n2   next = n1 + n2  

    3)
        0    1     1    2    3
                   n1   n2   next = n1 + n2  

  */

  int n;
  cin >> n;

  int n1 = 0, n2 = 1;
  for(int i = 0; i < n; i++){
    if (i < 2){
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