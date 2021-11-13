#include <iostream>
#include <vector>

using namespace std;

int main(){
  //  STL - Standart Template Library
  // [4][2][10][-1]... <---
  vector<int> v; // size can be changed dynamically
  v.push_back(4);
  v.push_back(2);
  v.push_back(10);
  v.push_back(-1);
  


  int b;
  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++)
    cout << *it << " ";
  
  // for(int i = 0; i < v.size(); i++)
  //   cout << v[i] << " ";

  cout << endl;

  return 0;
}