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

  string s = line;

  reverse(line.begin(), line.end());

  if(s == line)
    cout << "YES\n";
  else
    cout << "NO\n";



  return 0;
}