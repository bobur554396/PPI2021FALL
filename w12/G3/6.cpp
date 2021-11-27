#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void func(int a){
  cout << a << " ";
}



int main(){
  int a[] = {1, 1, 1, 2, 1, 4, 4, 5};
  vector<int> v(a, a + 8);

  for_each(v.begin(), v.end(), func);

  cout << endl;

  return 0;
}