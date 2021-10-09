#include <iostream>

using namespace std;

int main(){
  // - [ ] sort, reverse

  int a[] = {10, -5, 8, 1};

  sort(a, a + 4);
  reverse(a, a + 4);

  for(int i = 0; i < 4; i++)
    cout << a[i] << " ";
  

  return 0;
}