#include <iostream>

using namespace std;

int main(){
  // - [ ] Find the sum of digits of given number
  // 123 => 1 + 2 + 3 = 6

  // solution for the numbers in range [100-999]
  // int n1 = n / 100; // 1
  // int n2 = n / 10 % 10; // 2
  // int n3 = n % 10; // 3
  // int res = n1 + n2 + n3;

  int n, sum = 0; // 123
  cin >> n;

  /*
  1) n = 123, k = 3
  2) n = 12, k = 2
  3) n = 1, k = 1
  4) n = 0
  */

  while(n > 0){
    int k = n % 10;
    sum = sum + k;
    n = n / 10;
  }

  cout << sum << endl;

  


  return 0;
}