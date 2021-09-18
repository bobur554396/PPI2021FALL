#include <iostream>

using namespace std;

int main(){
  // - [ ] sum of numbers (cin reads numbers in the loop)
  // Find sum of numbers until 0;
  // 1 2 3 4 5 5 0 => 20

  // while(true){
  // while(10 == 10){
  // while(1){

  int n, sum = 0;
  while(true){
    cin >> n;
    if(n == 0)
      break;
    sum += n; //sum = sum + n;
  }

  cout << sum << endl;
  

  return 0;
}