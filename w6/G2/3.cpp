#include <iostream>

using namespace std;

int main(){
  //     - [ ] isalpha, isdigit, isalnum, ispunct

  string word = "Hel12l%$o wo3rld!";

  for(int i = 0; i < word.size(); i++){
    // if(isalpha(word[i]))
    // if(isdigit(word[i]))
    // if(isalnum(word[i]))
    // if(!isalnum(word[i]))
    if(ispunct(word[i]))
      cout << word[i];
  }
    
  

  return 0;
}