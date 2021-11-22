#include <iostream>
#include <stack>

using namespace std;

int main(){
  /*
  Brackets validation
  () - Yes
  )()() - No
  (()) - Yes
  ((())) - Yes
  ()) - No
  */
  string s;
  cin >> s;
  int cnt = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '('){
      cnt++;
    } else {
      cnt--;
      if(cnt < 0){
        cout << "NO\n";
        return 0;
      }
    }
  }
  if(cnt == 0)
    cout << "YES\n";
  else
    cout << "NO\n";


  return 0;
}