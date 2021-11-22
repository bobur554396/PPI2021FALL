#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
  /*
  Queue

  FIFO - First In First Out

  [][7][5][10][3] |R|
  */
  queue<int> q;
  q.push(3);
  q.push(10);
  q.push(5);
  q.push(7);

  cout << q.size() << endl;
  cout << q.empty() << endl; // 0 | 1

  // q.pop();
  // cout << q.front() << endl;
  // cout << q.back() << endl;

  while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
  }
  

  return 0;
}