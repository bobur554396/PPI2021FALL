#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  4
  2 3 5 -7
  5

  Output:
  2 3 -7 0

  - [ ] Find number K and remove it, shift left all rest elements add 0 at the end
  */
  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write
  
  int n, k;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  
  // your code

  return 0;
}