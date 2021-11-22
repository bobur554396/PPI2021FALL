#include <iostream>
#include <stack>

using namespace std;

int main(){
  // Stack - verctical box
  // LIFO - Last In First Out
  /*

  []
  []
  [10]
  [2]
  */
  stack<int> s;
  s.push(2);
  s.push(10);
  s.push(5);

  cout << s.size() << endl;
  // cout << s.empty() << endl;

  // cout << s.top() << endl;
  
  s.pop();

  cout << s.size() << endl;
  

  return 0;
}