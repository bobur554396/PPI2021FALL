#include <iostream>
#include <vector>
#include <set>


using namespace std;

int main(){
  set<int> s;
  s.insert(10);
  s.insert(2);
  s.insert(5);
  s.insert(1);
  s.insert(2);
  s.insert(10);

  set<int>::iterator it = s.find(5);
  if(it != s.end())
    cout << "found: " << *it << endl;
  else
    cout << "not found\n";

  return 0;
}