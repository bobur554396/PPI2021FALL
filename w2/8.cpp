#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // set 1 for i-th bit of number

  int a = 5, i;
  cin >> i;

  // i = 0, a = 5 -> bin -> 0101 = 5
  // i = 1, a = 5 -> bin -> 0111 = 7
  // i = 2, a = 5 -> bin -> 0101 = 5
  // i = 3, a = 5 -> bin -> 1101 = 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 8 + 4 + 1 = 13

  // int b = (1 << i);
  // int res = a | b;

  // cout << res << endl;

  // 2)
  // int res = a | (1 << i);
  
  a |= (1 << i);

  cout << a << endl;

  return 0;
}