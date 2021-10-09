#include <iostream>

using namespace std;

int main(){
  // - [ ] Built-in functions
  // - [ ] tolower, toupper

  string l;
  cin >> l;

  for(int i = 0; i < l.size(); i++)
    cout << (char)tolower(l[i]);
    // cout << (char)toupper(l[i]);


  return 0;
}