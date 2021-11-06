#include <iostream>

using namespace std;


void f1(int n){
  for(int i = 1; i <= n; i++)
    cout << i << " ";
}

void f2(int n){
  if(n == 0) // base case
    return;

  f2(n - 1);
  cout << n << " ";
}
/*
Stack - LIFO => Last In First Out

L = [] -- empty stack

1) n = 4; => f2(3); --> store rest of the function in stack => L = [cout << 4 << " ";]
2) n = 3; => f2(2); --> stack L = [cout << 3 << " "; cout << 4 << " ";]
3) n = 2; => f2(1); --> stack L = [cout << 2 << " "; cout << 3 << " "; cout << 4 << " ";]
4) n = 1; => f2(0); --> stack L = [cout << 1 << " "; cout << 2 << " "; cout << 3 << " "; cout << 4 << " ";]
5) n = 0; return; // base case, stop execution -> compiler will check function's stack.
                                               -> if there any instructuins, it will execute them

Output:
1 2 3 4
*/


int main(){
  //  - [x] show numbers from 1 till n / reverse: from n till 1

  // 1)  n = 4
  //     1 2 3 4
  int n;
  cin >> n;
  
  f2(n);

  return 0;
}