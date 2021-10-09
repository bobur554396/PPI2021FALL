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
  // toUpper, toLower, isDigit

  string l;
  cin >> l;

  for(int i = 0; i < l.size(); i++)
    cout << toUpper2(l[i]);


  return 0;
}
