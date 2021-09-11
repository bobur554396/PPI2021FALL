#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // - [ ] can you draw triangle a, b, c
  int a, b, c;
  cin >> a >> b >> c;

  bool flag = false;
  if(a + b > c){
    if(b + c > a){
      if(a + c > b){
        flag = true;
      }
    }         
  }

  if (flag == true) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  

  return 0;
}