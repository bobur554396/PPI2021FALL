#include <iostream>

using namespace std;

int main(){
  //    - [ ] tolower, toupper
  string l;
  cin >> l;

  for(int i = 0; i < l.size(); i++)
    cout << (char)toupper(l[i]);

  return 0;
}