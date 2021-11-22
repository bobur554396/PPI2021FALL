#include <iostream>
#include <stack>
#include <queue>
#include <deque>


using namespace std;

int main(){
  /*
  Deque - Double Ended QUEue (aka 'deck')


  [8][4][3][5] |R|
  */
  deque<int> q;
  q.push_back(4);
  q.push_front(3);
  q.push_front(5);
  q.push_back(8);

  q.pop_front();
  q.pop_back();

  cout << q.front() << " " << q.back() << endl;

  
  

  return 0;
}