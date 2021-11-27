#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void show(vector<int> v){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}

/*
  1 1 1 2 3 1 4 5 5
  1 2 3 1 4 5 ? ? ?
*/


int main(){
  int a[] = {1, 1, 1, 2, 3, 1, 4, 5, 5};
  vector<int> v(a, a + 9);

  vector<int>::iterator l = unique(v.begin(), v.end());
  vector<int>::iterator it = v.begin();
  
  while(it != l) {
    cout << *it << " ";
    ++it;
  }
  cout << endl;
  

  // show(v);
  

  return 0;
}