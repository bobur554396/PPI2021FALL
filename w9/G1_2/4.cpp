#include <iostream>

using namespace std;


void f1(int n){
  while(n >= 1){
    // cout << n-- << " ";
    cout << n << " ";
    n--;
  }
}

void f2(int n){
  if(n == 0) // base case
    return;
    
  cout << n << " ";  
  f2(n - 1);
}

/*
1) n = 5; => cout << 5; => f2(4);
2) n = 4; => cout << 4; => f2(3);
3) ...
*/


int main(){
  //  - [x] show numbers from 1 till n / reverse: from n till 1

  // 1)  n = 5
  //     5 4 3 2 1
  int n;
  cin >> n;
  
  f2(n);

  return 0;
}