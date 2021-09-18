#include <iostream>

using namespace std;

int main(){
  // Find sum of all numbers which are entered, until number 0, 
  // 1 2 40 3 8 0 => 54

  int n, sum = 0;
  for(;;){
    cin >> n;
    if(n == 0)
      break;
    sum += n;
  }
  cout << sum << endl;
  

  return 0;
}