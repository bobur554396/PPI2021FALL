#include <iostream>

using namespace std;

int f1(int n){
  int k = 0;
  for(int i = 1; i <= n; i++)
    k += i;
  
  return k;
}

int f2(int n){
  if(n == 1) // base case
    return 1;
  return n + f2(n - 1);
}
/*
0) base case - when n = 1, result = 1

1) f2(4) = 4 + f2(3); => 4 + 6 = 10;
2) f2(3) = 3 + f2(2); => 3 + 3 = 6
3) f2(2) = 2 + f2(1); => 2 + 1 = 3
4) f2(1) = 1;
*/
int main(){
  //  - [ ] factorial
  
  int n;
  cin >> n;
  // n = 4; => 1 + 2 + 3 + 4 = 10

  cout << f1(n) << " " << f2(n) << endl;

  return 0;
}
