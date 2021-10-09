#include <iostream>
#include <cmath>

using namespace std;

/*
    - [ ] factorial
  
  4! = 1 * 2 * 3 * 4 = 24
*/

int factorial(int n){
  int k = 1;
  for(int i = 1; i <= n; i++){
    k *= i;
  }
  return k;
}

int main(){

  int n;
  cin >> n;

  cout << factorial(n) << endl;

  return 0;
}
