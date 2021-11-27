#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
  1 2 3
  1 3 2
  2 1 3
  2 3 1
  3 1 2
  3 2 1

  3! = 6

*/

int main(){
  int a[] = {2, 1, 3};
  // sort(a, a + 3);
  // do {
  //   cout << a[0] << " " << a[1] << " " << a[2] << endl;
  // } while(next_permutation(a, a + 3));

  do {
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
  } while(prev_permutation(a, a + 3));

  return 0;
}