#include <iostream>
#include <cmath>

using namespace std;

int main(){
  float a = 9;
  // cin >> a;

  float result = sqrt(a);
  cout << result << endl;
  
  // |10 - 20| = 10
  cout << abs(10 - 20) << endl;

  cout << M_PI << endl;
  cout << sin(90 * M_PI / 180) << endl;
  cout << cos(90 * M_PI / 180) << endl; //  6.12 * 10^-17
  cout << tan(45 * M_PI / 180) << endl;
  cout << 1 / tan(45 * M_PI / 180) << endl;


  cout << min(2, 3) << endl;
  cout << max(2, 3) << endl;
  cout << pow(2, 3) << endl; // power(base, exp)
  cout << pow(2, -3) << endl; // power(base, exp) = 2^-3 = 1 / 8 = 0.125


  return 0;
}


