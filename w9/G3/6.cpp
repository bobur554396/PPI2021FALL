#include <iostream>

using namespace std;

void f1(int n){
  for(int i = 1; i <= n; i++)
    cout << i << " ";
}

void f2(int n){
  if(n == 0)
    return;

  f2(n - 1);
  cout << n << " ";
}
/*
0) base case - when n = 0, then stop recursion

stack L = [];

1) f2(4) => f2(3); rest of the funtion will be stored in Stack L = [cout << 4 << " ";]
2) f2(3) => f2(2); Stack L = [cout << 3 << " "; cout << 4 << " ";]
3) f2(2) => f2(1); Stack L = [cout << 2 << " "; cout << 3 << " "; cout << 4 << " ";]
4) f2(1) => f2(0); Stack L = [cout << 1 << " "; cout << 2 << " "; cout << 3 << " "; cout << 4 << " ";]
5) f2(0) => return; stop execition, base case; -> will check for empty Stack, if Stack is not empy,
                                               -> it will start execution one by one;

1 2 3 4

*/
int main(){
  //  - [ ] show numbers from 1 till n / reverse: from n till 1
  
  int n;
  cin >> n;
  // n = 5; => 1 2 3 4

  f2(n);

  return 0;
}

/*

Stack - LIFO - Last In Frist Out

add 3, add 5, add -1, add 10
get 10, get -1, ...

[]
[]
[5]
[3]


*/