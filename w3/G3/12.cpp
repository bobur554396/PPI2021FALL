#include <iostream>

using namespace std;

int main(){
  // - [x] sum of numbers (cin reads numbers in the loop)
  // 1 4 5 2 0 => 1+4+5+2=12

  // while(true){
  // while(1 == 1){
  // while(10){

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