#include <iostream>

using namespace std;

void f1(int n){
  for(int i = n; i > 0; i--)
    cout << i << " ";
}

void f2(int n){
  if(n == 0)
    return;
  cout << n << " ";

  f2(n - 1);
}
/*
0) base case - when n = 0, then stop recursion 
1) f2(4) => 4, f2(3)
2) f2(3) => 3, f2(2)
3) f2(2) => 2, f2(1)
4) f2(1) => 1, f2(0)
5) f2(0) => return; stop execution;
*/
int main(){
  //  - [ ] show numbers from 1 till n / reverse: from n till 1
  
  int n;
  cin >> n;
  // n = 5; => 5 4 3 2 1

  f2(n);

  return 0;
}