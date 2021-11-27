#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
std::unique


1 1 1 2 1 4 4 5
          |   |

1 2 1 4 5 ? ? ?
*/

int main(){
  int a[] = {1, 1, 1, 2, 1, 4, 4, 5};
  vector<int> v(a, a + 8);
  
  vector<int>::iterator res = unique(v.begin(), v.end());
  vector<int>::iterator it = v.begin();

  while(it != res){
    cout << *it << " ";
    it++;
  }

  cout << endl;

  return 0;
}