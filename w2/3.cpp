#include <iostream>

using namespace std;

int main(){
  /*   ++, --, +=, -=, *=, /=, %=
    increment / decrement
    1) pre (increment / decrement)
    2) post (increment / decrement)
  */

  int a = 2;

  a += 1; // a = a + 1; // => a++, ++a, a+=1;
  int b = 5;

  b += 10; // b = b + 10;
  b -= 2; // b = b - 2;
  b %= 3; // b = b % 3;

  cout << a << " " << b << endl;
  

  return 0;
}