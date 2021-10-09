#include <iostream>

using namespace std;

int main(){
  //    - [ ] isalpha, isdigit, isalnum, ispunct
  string l = "He23l%$lo kb6tu!";
  
  for(int i = 0; i < l.size(); i++)
    // if(isalpha(l[i]))
    // if(isdigit(l[i]))
    // if(isalnum(l[i]))
    // if(!isalnum(l[i]))
    if(ispunct(l[i]))
      cout << l[i];

  return 0;
}