#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;


int main(){


  /*
  1 2 3
  1 3 2
  2 1 3
  2 3 1
  3 1 2
  3 2 1

  3! = 1 * 2 * 3 = 6
  */
  int a[] = {1, 2, 3};
  vector<int> v(a, a + 3);
  // sort(a, a + 3);
  do {
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
  } while(next_permutation(v.begin(), v.end()));


  // do {
  //   cout << a[0] << " " << a[1] << " " << a[2] << endl;
  // } while(prev_permutation(a, a + 3));

  return 0;
}