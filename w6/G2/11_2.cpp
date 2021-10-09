#include <iostream>
#include <cmath>

using namespace std;

/*

base = 2, exp = -3
2^-3 = 1 / 8 = 0.125

2^3 = 2 * 2 * 2 = 8

k = 1
1) k = k * base = 1 * 2 = 2
2) k = k * base = 2 * 2 = 4
3) k = k * base = 4 * 2 = 8
*/

float myPow(int base, int exp){
  float k = 1;
  for(int i = 0; i < abs(exp); i++){
    k *= base;
  }
  if(exp < 0)
    k = 1 / k;

  return k;
}

int main(){

  int a, b;
  cin >> a >> b;

  cout << myPow(a, b) << endl;  

  return 0;
}
