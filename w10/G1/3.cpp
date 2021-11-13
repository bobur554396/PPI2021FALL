#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standard Template Library
  // Vector - dynamically changeable array
  int a[] = {2, -1, 10};

  // cout << *(a + 0) << endl; // a[0]
  // cout << *(a + 1) << endl; // a[1]
  // cout << *(a + 2) << endl; // a[2]
  // cout << *(a + 3) << endl; // a[2]

  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(-10);

  cout << *(v.begin() + 0) << endl;
  cout << *(v.begin() + 1) << endl;
  cout << *(v.begin() + 2) << endl; // last value
  cout << *(v.end() - 1) << endl; // last value
  

  // for(int i = 0; i < v.size(); i++)
  //   // cout << v[i] << " ";
  //   cout << v.at(i) << " ";

  return 0;
}