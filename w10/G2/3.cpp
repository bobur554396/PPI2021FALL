#include <iostream>
#include <vector>

using namespace std;

int main(){
  //  STL - Standart Template Library
  int a = 2;
  int arr[5]; // static size
  // [4][2][10][-1]... <---
  vector<int> v; // size can be changed dynamically
  v.push_back(4);
  v.push_back(2);
  v.push_back(10);
  v.push_back(-1);


  cout << v.front() << " " << v.back() << endl;
  cout << v[0] << " " << v[v.size() - 1] << endl;
  


  // cout << v.size() << endl;
  // for(int i = 0; i < v.size(); i++)
  //   cout << v[i] << " ";
  
  // cout << endl;

  return 0;
}