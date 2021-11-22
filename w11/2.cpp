#include <iostream>
#include <stack>

using namespace std;

int main(){
  // Stack - verctical box
  // LIFO - Last In First Out
  /*

  [1]
  [5]
  [10]
  [2]
  */
  stack<int> s;
  s.push(2);
  s.push(10);
  s.push(5);
  s.push(1);

  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }


  return 0;
}