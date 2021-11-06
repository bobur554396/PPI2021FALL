#include <iostream>

using namespace std;

int f1(int n){
  int k = 1;
  for(int i = 1; i <= n; i++)
    k *= i;
  
  return k;
}

int f2(int n){
  if(n == 1)
    return 1;
  return n * f2(n - 1);
}

/*
dividing and concure

base case = when n = 1, return 1


n = 4;
1) f2(4); return 4 * f2(3); => return 4 * 6; -> return 24;
2) f2(3); return 3 * f2(2); => return 3 * 2; -> return 6;
3) f2(2); return 2 * f2(1); => return 2 * 1; -> return 2;
4) f2(1); return 1;


*/

int main(){
  //     - [ ] factorial

  int n; // n = 4; => res = 1 * 2 * 3 * 4 = 24
  cin >> n;

  cout << f1(n) << " " << f2(n) << endl;


  return 0;
}