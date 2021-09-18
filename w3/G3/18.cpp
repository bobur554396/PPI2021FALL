#include <iostream>

using namespace std;

int main(){
  float a[4] = {2.5, 3.6, 1.9, 2.0};
  double b[] = {2.5, 3.6, 1.9, 2.0};
  bool flags[4] = {true, false, false, true};
  // int c[]; -- wrong array.

  char word[] = {'H', 'e', 'l', 'l', 'o'};
  word[4] = 'O';

  double x = 1.5;
  b[0] = x * x; 


  return 0;
}