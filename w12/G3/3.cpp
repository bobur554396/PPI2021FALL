#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*

*/

int main(){
  vector<int> v(5);
  int a[5];

  fill(v.begin(), v.end(), 10);

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  return 0;
}