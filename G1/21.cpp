#include <iostream>

using namespace std;

int main(){
  // - [ ] Find the sum of digits of given number
  // 123 => 1 + 2 + 3 = 6

  /*
  solution for range: n = [100 - 999]

    n = 123
    
    int n1 = n / 100; // 1
    int n2 = n / 10 % 10; // 2;
    int n3 = n % 10; // 3

    n1+ n2 + n3
  */


  int n, sum = 0;
  cin >> n; // 123

  /*
  n = 123
  
  1)n = 123;  k = 123 % 10 = 3;  n = n / 10 = 123 / 10 = 12
  2)n = 12;  k = 12 % 10 = 2;  n = n / 10 = 12 / 10 = 1
  3)n = 1;  k = 1 % 10 = 1;  n = n / 10 = 1 / 10 = 0
  4)n = 0;  
  */


  while(n){ // while(n > 0){
    // int k = n % 10;
    sum += n % 10;
    n /= 10; // n = n / 10
  }

  cout << sum << endl;
  


  

  return 0;
}