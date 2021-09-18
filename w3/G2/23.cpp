#include <iostream>

using namespace std;

int main(){
  // Array - list of elements in one variable
  // addresses = {0x.. 0x.. 0x.. 0x..}
  //       arr = {[10] [20] [30] [40]}
  //   indexes =   0    1    2    3

  int arr[4];
  arr[0] = 10;
  arr[1] = arr[0] + 10;
  arr[2] = arr[0] * 3;
  arr[3] = 40;

  cout << arr << endl;
  cout << *(arr + 0) << endl; // => arr[0]
  cout << *(arr + 1) << endl; // => arr[1]
  cout << *(arr + 2) << endl; // => arr[2]




  return 0;
}