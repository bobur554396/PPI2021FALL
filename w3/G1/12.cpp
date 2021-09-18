#include <iostream>

using namespace std;

int main(){
  // - [ ] all numbers which divisible by 3 in range (a, b), a < b
  // - [ ] count number of dividers of 3

  int a, b, cnt = 0;
  cin >> a >> b;

  for(int i = a; i <= b; i++){
    if (i % 3 == 0){
      cnt++;
      cout << i << " ";
    }
  }
  cout << endl << cnt << endl;


  return 0;
}