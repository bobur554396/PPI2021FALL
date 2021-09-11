#include <iostream>

using namespace std;

int main(){

  // Data type - sizeof, 1 byte = 8 bits
  // char - 1 byte = 8 bits (cells) -> max value = 2 ^ 8 = 256
  // int - 4 byte = 4 * 8 = 32 bits -> max value = 2 ^ 32


  bool ok = true; // 1 / 0
  int a = 2;

  cout << "sizeof(bool)=" << sizeof(bool) << endl;
  cout << "sizeof(char)=" << sizeof(char) << endl;
  cout << "sizeof(int)=" << sizeof(int) << endl;
  cout << "sizeof(float)=" << sizeof(float) << endl;
  cout << "sizeof(double)=" << sizeof(double) << endl;


  return 0;
}