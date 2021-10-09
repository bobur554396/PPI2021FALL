#include <iostream>
#include <cmath>

using namespace std;


/*
  prime: 2 3 5 7 11 13 17 19 23 ...
  not prime: 4 6 9 15 20 ...

  n = 9

  [2 ... sqrt(n / 2)] -> find any divisors?
*/

bool isPrime(int n){
  for(int i = 2; i <= sqrt(n / 2); i++){
    if(n % i == 0)
      return false;
  }
  return true;
}


int main(){
  //   - [ ] isPrime
  int n;
  cin >> n;

  if(isPrime(n))
    cout << "YES";
  else
    cout << "NO";
  
  return 0;
}

