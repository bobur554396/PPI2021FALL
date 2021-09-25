#include <iostream>

using namespace std;

int main(){
  /*
  in: Hello
  out: HELLO
  
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




  

 

  return 0;
}