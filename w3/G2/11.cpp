#include <iostream>

using namespace std;

int main(){
  // - [ ] factorial
  // 4! = 1 * 2 * 3 * 4
  int n;
  cin >> n;

  int f = 1;
  for(int i = 1; i <= n; i++){
    f *= i; //f = f * i;
  }

  cout << f << endl;

  

  return 0;
}