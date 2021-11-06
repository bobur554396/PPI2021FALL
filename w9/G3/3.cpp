#include <iostream>

using namespace std;

void show2(){
  cout << "hello kbtu 1\n";
  cout << "hello kbtu 2\n";
  cout << "hello kbtu 3\n";

  show2();
}

// What is the recursion - when function calls itself inside it
// base case - finshing point of recursion function

// stack overflow - error => infinity calling function itself


int main(){

  show2();

  return 0;
}