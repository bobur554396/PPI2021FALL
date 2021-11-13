#include <iostream>
#include <vector>

using namespace std;

int main(){
  //  STL - Standart Template Library
  int a[] = {2, 7, 0, 8};

  // cout << *(a + 0) << endl;
  // cout << *(a + 1) << endl;
  // cout << *(a + 2) << endl;
  // cout << *(a + 3) << endl;

  // sort(a, a + 4);

  // v = [4][2][10][-1][]
  vector<int> v;
  v.push_back(4);
  v.push_back(2);
  v.push_back(10);
  v.push_back(-1);

  // sort(v.begin(), v.begin() + v.size()); 
  sort(v.begin(), v.end()); // v.begin() + v.size() == v.end()


  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl;

  return 0;
}