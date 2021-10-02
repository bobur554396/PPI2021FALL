#include <iostream>

using namespace std;

int main(){
  // - [ ] convert char to number (ascii)

  char c = '8';

  cout << int(c) << endl;

  int a = int(c) - int('0');
  cout << a * 2 << endl;


  return 0;
}