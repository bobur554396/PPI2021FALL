#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  h34ell9o

  Output:
  349
  */
  //  - [ ] Show all digits from given string
  string word;
  cin >> word;

  for(int i = 0; i < word.size(); i++){
    int code = (int)word[i];
    if(code >= 48 && code <= 57){
      cout << word[i];
    }
  }

  // cout << (int)'0' << endl;
  // cout << (int)'9' << endl;
  


  return 0;
}