#include <iostream>

using namespace std;

int main(){
  /*
  Input:
  he45l2lo

  Output:
  452

  - [ ] Show all digits from string
  */
  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write
  
  string word;
  cin >> word;
  // word  ---> string
  // word[0] ----> char
  // word[2] ----> char

  for(int i = 0; i < word.size(); i++){
    int code = (int)word[i];
    if(code >= 48 && code <= 57){
      cout << word[i];
    }
  }

  // cout << (int)'2' << endl;
  // cout << (int)'4' << endl;

  return 0;
}