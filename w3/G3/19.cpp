#include <iostream>

using namespace std;

int main(){
  /*
  5
  2 3 1 8 4

  Multiplication of even numbers.
  
  Even numbers: 2 8 4
  Result: 2 * 8 * 4 = 64
  */

  // Read given data
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
    
  
  // Your logic
  int k = 1;
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0){
      k *= a[i];
    }
  }

  cout << k << endl;

  


  return 0;
}