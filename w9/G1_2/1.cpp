#include <iostream>

using namespace std;

void show1(){
  cout << "hello kbtu\n";
}

void show2(){
  cout << "Line number 1\n";
  cout << "Line number 2\n";
  cout << "Line number 3\n";

  show1();
  cout << "Line number 4\n";
}


int main(){

  show2();

  return 0;
}