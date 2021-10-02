#include <iostream>

using namespace std;

int main(){
  // - [ ] palindrom (yes, no)

  // YES
  // aba, abba, abcba, level, ...

  // NO
  // ab, abdb, abb, ...

  /*
    abcba

    1) a b c b a
       l       r

    2) a b c b a
         l   r

  */

  
  string line;
  cin >> line;

  int left = 0;
  int right = line.size() - 1;
  
  while(left != right){
    if(line[left] != line[right]){
      cout << "NO";
      return 0;
    }
    left++;
    right--;
  }

  cout << "YES";



  return 0;
}