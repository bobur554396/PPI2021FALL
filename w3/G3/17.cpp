#include <iostream>

using namespace std;

int main(){
  // Array - list of elemets in one variable.
  // addresses = {0x. 0x. 0x. 0x.}
  //       arr = {[ ] [ ] [ ] [ ]}
  //   indexes =   0   1   2   3

  int n = 4;
  int arr[n];
  arr[0] = 10;
  arr[1] = arr[0] * 2;
  arr[2] = arr[0] + 20;
  arr[3] = 40;

  // cout << *(arr + 0) << endl; // => arr[0]
  // cout << *(arr + 1) << endl; // => arr[1]
  // cout << *(arr + 2) << endl; // => arr[2]
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";

  return 0;
}