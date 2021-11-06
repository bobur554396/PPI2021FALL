#include <iostream>

using namespace std;

void show1(){
  cout << "hello kbtu\n";
}

int a = 0;
void show2(){
  cout << "Line number 1\n";
  cout << "Line number 2\n";
  cout << "Line number 3\n";

  a++;
  cout << a << endl;
  if(a == 1000) // base case
    return; // stop current function execution

  show2(); // recursion function
}

// stack overflow - error when your function can not finish it's instructions
// base case -- stopping (finishing) point of the recursion function

int main(){

  show2();

  return 0;
}