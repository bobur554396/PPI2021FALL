#include <iostream>
#include <vector>

using namespace std;

int main(){
  // [4][2][10][-1]... <---
  vector<int> v;
  v.push_back(4);
  v.push_back(2);
  v.push_back(10);
  v.push_back(-1);

  v.insert(v.begin() + 1, 5);
  
  

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}