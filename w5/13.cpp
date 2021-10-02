#include <iostream>

using namespace std;

int main(){
  // - [ ] palindrom (yes, no)

  // YES
  // aba, abba, abcba, level, ...

  // NO
  // ab, abdb, abb, ...

  string line;
  cin >> line;

  /*
    abccba
    a == a
    b == b

    i = 0 == n - 1 - 0
    i = 1 == n - 1 - 1
    i = 2 == n - 1 - 2
    ...
  */

  int cnt = 0;
  for(int i = 0; i < line.size() / 2; i++){
    if(line[i] == line[line.size() - 1 - i])
      cnt++;
  }

  if(cnt == line.size() / 2)
    cout << "YES";
  else 
    cout << "NO";


  return 0;
}