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
  
  int *res = unique(a, a + 8); // creating pointer which can store only memory address
  int *first = a;

  while(first != res){
    cout << *first << " ";
    first++;
  }


  // for(int i = 0; i < 8; i++)
  //   cout << a[i] << " ";
  
  cout << endl;

  return 0;
}