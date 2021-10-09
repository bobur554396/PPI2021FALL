#include <iostream>
#include <cmath>

using namespace std;

/*
  - [ ] isPrime

  prime: 2 3 5 7 11 13 17 19 23 ...
  not prime: 4 10 100 15 21 ...

  [2...n - 1] - if we have divisor in this range - not prime
  
  [2...sqrt(n / 2)] - if we have divisor in this range - not prime
*/

bool isPrime(int n){
  for(int i = 2; i <= sqrt(n / 2); i++){
    if(n % i == 0)
      return false;
  }
  return true;
}

int main(){
  //     - [ ] factorial
  int n;
  cin >> n;

  if(isPrime(n))
    cout << "YES\n";
  else 
    cout << "NO\n";


  return 0;
}
