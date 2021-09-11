#include <iostream>

using namespace std;

int main(){
  /*   ++, --, +=, -=, *=, /=, %=
    increment / decrement
    1) pre (increment / decrement)
    2) post (increment / decrement)
  */

  int a = 2;

  // a = a + 1;  a++; ++a; a+=1;
  // ++a; // => a = a + 1;
  // ++a; // pre increment
  // a++; // post increment

  int b = a++;  // a = 3;

  //  c = ++3 + 3++;
  //  c = 4 + 3++;
  int c = ++a + b++; 


  cout << a << " " << b << endl;
  cout << c << endl;


  

  

  return 0;
}