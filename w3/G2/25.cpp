#include <iostream>

using namespace std;

int main(){
  /*
  5
  2 3 4 6 1

  Find sum of all even numbers
  */
  int n, sum = 0;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];
  
  for(int i = 0; i < n; i++){
    if(a[i] % 2 == 0)
      sum += a[i];
  }
  cout << sum << endl;


  return 0;
}