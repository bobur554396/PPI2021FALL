#include <iostream>

using namespace std;

int a = 0;
void show2(){
  cout << "hello kbtu 1\n";
  cout << "hello kbtu 2\n";
  cout << "hello kbtu 3\n";

  a++;
  cout << a << endl;
  if(a == 1000) // - base case
    return;

  show2(); // function calls itself
}

// What is the recursion - when function calls itself inside it
// base case - finshing point of recursion function

// stack overflow - error => infinity calling function itself


int main(){

  show2();

  return 0;
}