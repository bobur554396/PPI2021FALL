#include <iostream>

using namespace std;

int main(){
  /*
  4
  2 3 5 7
  
  - [ ] Show numbers in odd position from given array
  */
  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];


  for(int i = 0; i < n; i++){
    if(i % 2 == 1)
      cout << a[i] << " ";
  }

  return 0;
}