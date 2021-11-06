#include <iostream>

using namespace std;

int f1(int n){
  int k = 0;
  for(int i = 1; i <= n; i++)
    k += i;
  
  return k;
}

int f2(int n){
  if(n == 1)
    return 1;
  return n + f2(n - 1);
}

/*
dividing and concure

*/

int main(){
  // - [ ] sum of digits till N

  int n; // n = 4; => res = 1 + 2 + 3 + 4 = 10
  cin >> n;

  cout << f1(n) << " " << f2(n) << endl;


  return 0;
}