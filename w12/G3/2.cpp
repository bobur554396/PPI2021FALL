#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// rotate (begin, middle, last)
/*
1 2 3 4 5 6
|     |   |

0) 1 2 3 4 5 6
1) 4 2 3 1 5 6
2) 4 5 3 1 2 6
3) 4 5 6 1 2 3

res: 4 5 6 1 2 3
*/

int main(){
  vector<int> v;
  for(int i = 1; i <= 6; i++)
    v.push_back(i);

  // rotate(v.begin(), v.begin() + 3, v.end());
  rotate(v.begin(), v.end() - 5, v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  return 0;
}