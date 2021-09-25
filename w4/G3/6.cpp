#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  Hello

  Output:
  HELLO
  */

  //   - [ ] convert all letter to UPPER
  
  string word;
  cin >> word;

  for(int i = 0; i < word.size(); i++){
    int code = (int)word[i];
    if(code >= 97 && code <= 122)
      code -= 32;
    
    cout << (char)code;
  }

  // cout << (int)'0' << endl;
  // cout << (int)'9' << endl;
  


  return 0;
}