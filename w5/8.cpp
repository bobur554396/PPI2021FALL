#include <iostream>

using namespace std;

int main(){
  // - [ ] count how many times occurs
  string s1 = "hello kbtu fit asd kbtu ad qwe qwekbtu2asd";
  string s2 = "kbtu";

  // find(target_string, starting_index=0)
  int cnt = 0;
  int f = s1.find(s2);
  while(f != string::npos){
    f = s1.find(s2, f + s2.size());
    cnt++;
  }

  cout << cnt << endl;



  return 0;
}