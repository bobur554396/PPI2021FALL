#include <iostream>

using namespace std;

int main(){
  // - [ ] all numbers which divisible by 3 in range (a, b), a < b
  // 2) show the number of divisors

  int a, b, c, cnt = 0;
  cin >> a >> b >> c;

  for(int i = a; i <= b; i++){
    if(i % c == 0){
      cnt++;
      cout << i << " ";
    }
  }

  cout << endl << cnt << endl;


  return 0;
}