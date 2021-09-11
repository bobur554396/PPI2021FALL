#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // - [ ] can you draw triangle a, b, c
  int a, b, c;
  cin >> a >> b >> c;

  if(a + b > c && a + c > b && b + c > a)
    cout << "Yes\n";
  else
    cout << "No\n";


  return 0;
}