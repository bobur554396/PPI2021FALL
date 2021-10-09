#include <iostream>
#include <cmath>

using namespace std;

char toUpper(char c){
  if(int(c) >= 97 && int(c) <= 122)
    c -= 32;
  return c;
}

char toUpper2(char c){
  if(c >= 'a' && c <= 'z')
    c -= 32;
  return c;
}


int main(){
  // toUpper, toLower, isDigit - bool func
  
  string line;
  cin >> line;

  for(int i = 0; i < line.size(); i++){
    cout << toUpper2(line[i]);
  }


  return 0;
}

