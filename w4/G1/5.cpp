#include <iostream>

using namespace std;

int main(){
  /*
  4
  2 3 5 -6
  - [ ] Count number of positive numbers in array
  
  res: 3
  */

  int n, cnt = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int i = 0; i < n; i++){
    if(a[i] > 0)
      cnt++;
  }

  cout << cnt << endl;

  return 0;
}