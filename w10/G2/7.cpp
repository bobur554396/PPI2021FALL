#include <iostream>
#include <vector>

using namespace std;

// will be used in sorting algorithm to compare two elements 
bool cmp(int a, int b){
  if(a > b)
    return true;
  return false;
}

int main(){
  //  STL - Standart Template Library
  // v = [4][2][10][-1][]
  vector<int> v;
  v.push_back(4);
  v.push_back(2);
  v.push_back(10);
  v.push_back(-1);

  // v.erase(v.begin());
  // v.erase(v.begin());
  // v.erase(v.end() - 2);
  // v.erase(v.begin(), v.begin() + 2);
  // v.erase(v.end() - 2, v.end()); // remove last 2 elements of vector

  // v.clear(); // remove all elements
  cout << v.empty() << endl; // check vector to empty

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl;

  return 0;
}