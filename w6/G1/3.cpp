#include <iostream>

using namespace std;

int main(){
  // - [ ] Built-in functions
  // - [ ] isalpha, isdigit, isalnum, ispunct

  string l = "he23llo%$ k4bt$u;";

  for(int i = 0; i < l.size(); i++){
    // if(isalpha(l[i]))
    // if(isdigit(l[i]))
    // if(isalnum(l[i]))
    // if(!isalnum(l[i]))
    bool res = ispunct(l[i]);
    if(res)
      cout << l[i];
  }




  return 0;
}