#include <iostream>

using namespace std;

int main(){
  // - [ ] string: number of words
  // Hello, my name is KBTU!
  // res: 5

  string line;
  // cin >> line; -- read only first word till the space
  getline(cin, line); // -- read first line of the input

  for(int i = 0; i < line.size(); i++){
    cout << line[i] << " ";
  }

  return 0;
}