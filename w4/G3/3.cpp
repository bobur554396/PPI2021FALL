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
  //    - [ ] Find Max/Min from given array

  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];
  
  int maxi = a[0], mini = a[0];
  for(int i = 1; i < n; i++){
    if(a[i] > maxi)
      maxi = a[i];
    
    if(a[i] < mini)
      mini = a[i];
  }

  cout << maxi << " " << mini << endl;



  return 0;
}