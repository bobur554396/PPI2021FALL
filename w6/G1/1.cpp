#include <iostream>

using namespace std;

int main(){
  // - [ ] Built-in functions

  // - [ ] sort, reverse

  int a[] = {10, -3, 5, 7};

  // [start address, end address)
  sort(a, a + 4);
  reverse(a, a + 4);

  for(int i = 0; i < 4; i++)
    cout << a[i] << " "; 


  return 0;
}