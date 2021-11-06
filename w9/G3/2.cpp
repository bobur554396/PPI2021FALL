#include <iostream>

using namespace std;

void show1(){
  cout << "Hi\n";
  cout << "Line 2\n";
  cout << "Line 3\n";
  return;
  cout << "Line 4\n";
  cout << "Line 5\n";
}

void show2(){
  cout << "hello kbtu 1\n";
  cout << "hello kbtu 2\n";
  cout << "hello kbtu 3\n";

  show1();
  cout << "hello kbtu 4\n";
  cout << "hello kbtu 5\n";
}


int main(){

  show2();

  return 0;
}