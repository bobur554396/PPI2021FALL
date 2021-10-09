#include <iostream>
#include <cmath>

using namespace std;

/*
2^-3 = 1 / (2 * 2 * 2) = 1 / 8 = 0.125
base = 2, exp = -3

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

  int a, b; // local variable
  cin >> a >> b;

  cout << myPow(a, b) << endl;

  return 0;
}
