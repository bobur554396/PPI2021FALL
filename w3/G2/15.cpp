#include <iostream>

using namespace std;

int main(){
  // - Find number of words in sentences.
  // Hello my name is KBTU!
  // 5
  string line;
  // cin >> line; -- read first word till space
  getline(cin, line); // -- read first line of the input

  for(int i = 0; i < line.size(); i++){
    cout << line[i] << " ";
  }
  

  return 0;
}