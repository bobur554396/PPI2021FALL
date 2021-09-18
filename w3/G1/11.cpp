#include <iostream>

using namespace std;

int main(){
  // - [ ] all numbers which divisible by 3 in range (a, b)
  int a, b;
  cin >> a >> b;

  for(int i = a; i <= b; i++)
    if (i % 3 == 0)
      cout << i << " ";


  return 0;
}