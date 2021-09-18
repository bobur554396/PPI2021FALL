#include <iostream>

using namespace std;

int main(){
  // - [ ] Find the sum of digits of given number

  int n, sum = 0;
  cin >> n;

  /*
  1) n = 123, k = 3
  2) n = 12, k = 2
  3) n = 1, k = 1
  4) n = 0
  */
  while(n){ // while(n > 0){
    sum += n % 10;
    n /= 10;
  }

  cout << sum << endl;


  return 0;
}