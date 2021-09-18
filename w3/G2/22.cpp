#include <iostream>

using namespace std;

int main(){
  // Array - list of elements in one variable
  

  int arr[20];
  for(int i = 0; i < 20; i++){
    arr[i] = i * i;
  }

  for(int i = 0; i < 20; i++){
    cout << arr[i] << " ";
  }





  return 0;
}