#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void show(vector<int> v){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}

void doubler(int a){
  cout << a * 2 << " ";
}


int main(){
  int a[] = {1, 1, 1, 2, 3, 1, 4, 5, 5};
  vector<int> v(a, a + 9);

  for_each(v.begin(), v.end(), doubler);
  

  // show(v);
  

  return 0;
}