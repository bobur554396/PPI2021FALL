#include <iostream>

using namespace std;


int f1(int a[], int n){
  int maxi = a[0];
  for(int i = 0; i < n; i++){
    if(a[i] > maxi)
      maxi = a[i];
  }
  return maxi;
}

int f2(int a[], int n){
  if(n == 1)
    return a[0];
  return max(a[n - 1], f2(a, n - 1));
}

/*
base case - when n = 1, maximum value will be a[0];

1) f2([2, 10, -1, 7], 4) = max(7, f2([2, 10, -1], 3)) = max(7, 10) = 10
2) f2([2, 10, -1], 3) = max(-1, f2([2, 10], 2)) = max(-1, 10) = 10
3) f2([2, 10], 2) = max(10, f2([2], 1)) = max(10, 2) = 10
4) f2([2], 1) = 2

*/

int main(){
  //     - [ ] find minimum/maximum from given array
  int a[] = {2, 10, -1, 7};
  int n = 4;

  cout << f1(a, n) << " " << f2(a, n) << endl;

  return 0;
}
