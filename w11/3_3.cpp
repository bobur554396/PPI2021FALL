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


  []
  []
  []
  [(]
  */
  string s;
  cin >> s;
  stack<char> box;

  for(int i = 0; i < s.size(); i++){
    if(s[i] == '('){
      box.push(s[i]);
    } else {
      if(box.empty()){
        cout << "NO\n";
        return 0;
      }
      box.pop();
    }
  }

  if(box.empty())
    cout << "YES\n";
  else
    cout << "NO\n";
  
  return 0;
}