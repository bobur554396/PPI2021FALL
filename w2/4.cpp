#include <iostream>

using namespace std;

int main(){
  // - [ ] comparison operators (==, !=, >, <, >=, <=)

  cout << (1 == 1) << endl; // == ---> equal?
  cout << (2 != 1) << endl; // != ---> not equal?
  cout << (2 >= 1) << endl; 
  cout << (2 <= 1) << endl; 
  
  cout << ('A' == 'B' && 10 >= 3) << endl; // and
  cout << ('A' == 'B' || 10 >= 3) << endl; // or
  // 0 and 1 => 0
  // 0 or 1 => 1

  return 0;
}