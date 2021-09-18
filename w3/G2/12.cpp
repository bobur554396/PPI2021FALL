#include <iostream>

using namespace std;

int main(){
  // - [ ] sum of numbers (cin reads numbers in the loop)
  // Find sum of numbers until 0;
  // 1 2 3 4 5 5 0 => 20

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