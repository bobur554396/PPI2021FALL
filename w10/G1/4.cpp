#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standard Template Library
  // Vector - dynamicly changable array

  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(-10);

  cout << v.front() << " " << v.back() << endl;  
  cout << v[0] << " " << v[v.size() - 1] << endl;  

  // for(int i = 0; i < v.size(); i++)
  //   // cout << v[i] << " ";
  //   cout << v.at(i) << " ";

  return 0;
}