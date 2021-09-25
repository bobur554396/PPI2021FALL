#include <iostream>

using namespace std;

int main(){
  /*
  4
  2 3 5 -6
  5
  - [ ] Linear search of K from given array
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
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";

  return 0;
}