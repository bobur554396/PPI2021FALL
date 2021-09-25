#include <iostream>

using namespace std;

int main(){
  /*
  4
  2 3 5 6
      - [ ] Show numbers in odd position from given array
  */

  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  for(int i = 0; i < n; i++){
    if(i % 2 == 1)
      cout << a[i] << " ";
  }


  return 0;
}