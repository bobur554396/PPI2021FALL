#include <iostream>
#include <cmath>

using namespace std;

/*
2^3 = 2 * 2 * 2 = 8
base = 2, exp = 3

k = 1
1) k = k * base = 1 * 2 = 2
2) k = k * base = 2 * 2 = 4
3) k = k * base = 4 * 2 = 8

*/

int myPow(int base, int exp){
  int k = 1;
  for(int i = 0; i < exp; i++){
    k *= base;  
  }

  return k;
}

int main(){

  int a, b;
  cin >> a >> b;

  cout << myPow(a, b) << endl;

  return 0;
}
