#include <iostream>

using namespace std;

int main(){
  // - [ ] Find the sum of digits of given number
  

  int n, sum = 0;
  cin >> n; // 123

  /*
  n = 123
  
  1)n = 123;  k = 123 % 10 = 3;  n = n / 10 = 123 / 10 = 12
  2)n = 12;  k = 12 % 10 = 2;  n = n / 10 = 12 / 10 = 1
  3)n = 1;  k = 1 % 10 = 1;  n = n / 10 = 1 / 10 = 0
  4)n = 0;  
  */


  for(;n > 0; n /= 10){
    sum += n % 10;
  }

  cout << sum << endl;
  


  

  return 0;
}