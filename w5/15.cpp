#include <iostream>
#include <sstream>

using namespace std;

int main(){
  // stringstream - read data from given string as we did from terminal

  stringstream ss;

  ss << "123" << "hello" << " 2.5";

  int a;
  string line;
  float f;
  ss >> a >> line >> f;

  cout << a + 10 << endl;
  cout << line << endl;
  cout << f << endl;
  


  return 0;
}