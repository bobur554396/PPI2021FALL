#include <iostream>
#include <cmath>

using namespace std;


/*
  base = 2, exp = -3
  2^-3 = 1 / 2 * 2 * 2 = 1 / 8
*/

double my_pow(int base, int exp){
  double k = 1;
  for(int i = 0; i < abs(exp); i++)
    k *= base;
  
  if(exp < 0)
    k = 1 / k;

  return k;
}

int main(){

  int q, p;
  cin >> q >> p;

  cout << my_pow(q, p) << endl;
  
  return 0;
}

