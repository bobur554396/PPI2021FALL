#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  4
  3  4  8  -7
  Output:
  3
  */
  //    - [ ] Count number of positive numbers in array

  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  int n, cnt = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
    if(a[i] > 0)
      cnt++;
  }

  cout << cnt << endl;
  


  return 0;
}