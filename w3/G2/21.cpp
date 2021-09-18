#include <iostream>

using namespace std;

int main(){
  // Array - list of elements in one variable
  //     arr = {[10] [20] [20] [30]}
  // indexes =   0    1    2    3

  int arr[4];
  arr[0] = 10;
  arr[1] = arr[0] + 10;
  arr[2] = arr[0] * 3;
  arr[3] = 40;

  for(int i = 0; i < 4; i++){
    cout << arr[i] << " ";
  }





  return 0;
}