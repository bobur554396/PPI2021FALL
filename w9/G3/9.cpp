#include <iostream>

using namespace std;

int f1(int a, int n){
  // 2^3 = 1 * 2 * 2 * 2
  int k = 1;
  for(int i = 1; i <= n; i++){
    k *= a;
  }
  return k;
}

int f2(int a, int n){
  if(n == 0)
    return 1;
  return a * f2(a, n - 1);
}
/*
0) base case - when n = 0, result = 1

1) f2(2, 3) = 2 * f2(2, 2); => 2 * 4 = 8
2) f2(2, 2) = 2 * f2(2, 1); => 2 * 2 = 4
3) f2(2, 1) = 2 * f2(2, 0); => 2 * 1 = 2
4) f2(2, 0) = 1;

*/

// Task: implement negative exp value => 2^-3 = 0.125
int main(){
  //  - [ ] power
  // 2^3 = 8
  // 201^0 = 1
  int a, n;
  cin >> a >> n;

  cout << f1(a, n) << " " << f2(a, n) << endl;

  return 0;
}
