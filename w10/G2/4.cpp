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


  // v = [4][2][10][-1][]
  vector<int> v;
  v.push_back(4);
  v.push_back(2);
  v.push_back(10);
  v.push_back(-1);

  cout << *(v.begin() + 0)<< endl;
  cout << *(v.begin() + 1) << endl;
  cout << *(v.begin() + 2) << endl;
  cout << *(v.begin() + 3) << endl;
  cout << *(v.end() - 1) << endl;

  return 0;
}