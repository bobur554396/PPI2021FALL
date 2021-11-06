#include <iostream>

using namespace std;

int f1(int a, int n){
  // a^n ??
  // 2^3 = 1 * 2 * 2 * 2
  int k = 1;
  for(int i = 1; i <= n; i++)
    k *= a;
  return k;
}

// a = 201, n = 312
// 201^312 = 201 * 201^311 => 201 * 201 * 201^310 ...

int f2(int a, int n){
  if(n == 0)
    return 1;
  return a * f2(a, n - 1); 
}

/*
base case - when n = 0, result will always = 1;

1) f2(2, 3); return 2 * f2(2, 2); => 2 * 4 = 8
2) f2(2, 2); 2^2 => return 2 * f2(2, 1); => 2 * 2 = 4
3) f2(2, 1); 2^1 => return 2 * f2(2, 0); => 2 * 1 = 2
4) f2(2, 0); return 1;
*/

int main(){
  //  - [ ] power
  // 2^-3 = 0.125
  // 201^312 = ???
  // a = 2
  // n = 3

  int a, n; 
  cin >> a >> n;

  cout << f1(a, n) << " " << f2(a, n) << endl;


  return 0;
}