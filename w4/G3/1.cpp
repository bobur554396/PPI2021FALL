#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  4
  3  4  8  7
  0 [1] 2 [3] -> indexes
  Output:
  4 7
  */
  //     - [ ] Show numbers in odd position from given array

  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];
  
  for(int i = 0; i < n; i++){
    if(i % 2 == 1){
      cout << a[i] << " ";
    }
  }


  return 0;
}