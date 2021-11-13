#include <iostream>
#include <vector>

using namespace std;

int main(){
  //  - [ ] Infinity given numbers (stop when it - 0)
  /*
  Input:
  2
  12
  3
  8
  9
  -1
  0

  Output:
  12 9 3
  */
  vector<int> v;
  int n;
  for(;;){
    cout << "Enter next number...\n";
    cin >> n;
    if(n == 0)
      break;
    if(n % 3 == 0)
      v.push_back(n);
  }

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  

  return 0;
}