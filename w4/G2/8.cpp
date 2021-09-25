#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  hello

  Output:
  HELLO

  - [ ] convert all letter to UPPER
  */
  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write
  
  string word;
  cin >> word;

  for(int i = 0; i < word.size(); i++){
    int code = (int)word[i];
    if(code >= 97 && code <= 122)
      code -= 32;
      
    cout << (char)code;
  }

  
  // cout << (char)65 << endl;
  // cout << (int)'a' << endl;
  // cout << (int)'A' << endl;

  return 0;
}