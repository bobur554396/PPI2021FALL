#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // - [ ] bit manipulation, or, xor, and, >>, <<, |=, &=, ^=, ~

  // Your are given inter number N, find power of 2 ^ N.

  int n;
  cin >> n;

  // cout << pow(2, n) << endl;

  // Shift left <<
  // Shift right >>

  cout << (1 << n) << endl;


  return 0;
}