#include <iostream>

using namespace std;

int main(){
  // - [ ] What is an array?

  /*

  addresses:    0x..   0x..  0x..  0x..
  array:       {[11], [20], [30], [40]}
  indexes:       0     1     2      3

  */


  int arr[4]; // n -> array last index = n - 1


  arr[0] = 10; 
  arr[0] = arr[0] + 1; 
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;

  // cout << arr << endl;
  // cout << *(arr + 0) << endl; // arr[0]
  // cout << *(arr + 1) << endl; // arr[1]
  // cout << *(arr + 2) << endl; // arr[2]

  for(int i = 0; i < 4; i++){
    cout << arr[i] << " ";
  }

  return 0;
}