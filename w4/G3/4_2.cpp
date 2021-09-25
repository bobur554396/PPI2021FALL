#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  4
  3  4  8  -7
  8

  Output:
  YES
  */

  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  int n, k;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  cin >> k;
  
  for(int i = 0; i < n; i++){
    if(a[i] == k){
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

  return 0;
}