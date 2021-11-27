#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

void show(){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}

/*
  0) 1 2 3 4 5 6
  1) 3 2 1 4 5 6
  2) 3 4 1 2 5 6
  3) 3 4 5 2 1 6
  4) 3 4 5 6 1 2
*/


int main(){
  for(int i = 1; i <= 6; i++)
    v.push_back(i);

  // rotate(v.begin(), v.begin() + 3, v.end());
  rotate(v.begin(), v.end() - 5, v.end());
  
  show();

  return 0;
}