#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standard Template Library
  // Vector - dynamicly changable array
  int b = 3;
  int a[5];

  // v = [4][3][-1][10][2] <---- 
  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(-1);
  v.push_back(10);
  v.push_back(2);

  // cout << v[1] << endl;
  // cout << v.at(3) << endl;

  // cout << v.size() << endl;

  for(int i = 0; i < v.size(); i++)
    // cout << v[i] << " ";
    cout << v.at(i) << " ";

  return 0;
}