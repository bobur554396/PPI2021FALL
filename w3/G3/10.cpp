#include <iostream>

using namespace std;

int main(){
  // - [x] sum of numbers (cin reads numbers in the loop)
  // 1 4 5 2 0 => 1+4+5+2=12

  int n, sum = 0;
  for(;;){
    cin >> n;
    if(n == 0)
      break;
    sum += n; //sum = sum + n;
  }

  cout << sum << endl;




  return 0;
}