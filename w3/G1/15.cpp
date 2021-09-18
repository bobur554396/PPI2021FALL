#include <iostream>

using namespace std;

int main(){
  
  int sum = 0;
  for(int i = 0; i < 5; i++){
    // sum = sum + i;
    sum += i;
  }
  // 0 1 2 3 4

  cout << sum << endl;

  return 0;
}