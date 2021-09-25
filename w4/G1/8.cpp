#include <iostream>

using namespace std;

int main(){
  /*
  he23l8lo
  
  - Show all digits from string
  */

  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  string word;
  cin >> word;

  for(int i = 0; i < word.size(); i++){
    int code = (int)word[i];
    if(code >= 48 && code <= 57)
      cout << word[i];
  }

  // cout << (int)'a'; // 97
  // cout << (int)' '; // 32
  // cout << (int)'0'; // 48
  // cout << (int)'2'; // 50
  // // ...     [0...9]
  // cout << (int)'9'; // 57


  

 

  return 0;
}