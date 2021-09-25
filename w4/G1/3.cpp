#include <iostream>

using namespace std;

int main(){
  /*
  4
  2 3 5 6
  */


  // reading given input
  int n, sum = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  
  /// your logic
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0)
      sum += a[i];
  }

  /// output part
  cout << sum << endl;


  return 0;
}