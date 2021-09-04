#include <iostream>

using namespace std;

int main(){
  // true, false -> 1 / 0
  bool a = true;  // 1
  bool b = false; // 0

  bool c = 0;

  // cout << a << endl;
  // cout << b << endl;
  // cout << c << endl;

  // and (multiplication) = &, or (sum) = |, xor = ^

  cout << (a & b) << endl;
  cout << (a | b) << endl;
  cout << (a ^ b) << endl;


  return 0;
}


