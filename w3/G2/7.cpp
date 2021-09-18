#include <iostream>

using namespace std;

int main(){
  //- [ ] all numbers which divisible by 3 in range (a, b), a < b;
  // show number of divisor of 3

  int a, b, c, cnt = 0;
  cin >> a >> b >> c;

  for(int i = a; i <= b; i++){
    if(i % c == 0){
      cnt++; //cnt = cnt + 1;
      cout << i << " ";
    }
  }

  cout << endl << cnt << endl;


  return 0;
}