#include <iostream>

using namespace std;

int main(){
  /*
  4
  2 3 5 -7
  
  - [ ] Count number of positive numbers in array
  */
  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  
  int n, cnt = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];


  for(int i = 0; i < n; i++){
    if(a[i] > 0)
      cnt++;
  }

  cout << cnt << endl;

  return 0;
}