#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standard Template Library
  // Vector - dynamically changeable array

  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(-10);
  v.push_back(7);

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";

  return 0;
}