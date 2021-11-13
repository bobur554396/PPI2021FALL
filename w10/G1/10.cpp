#include <iostream>
#include <vector>

using namespace std;


int main(){
  //   - [ ] Infinity given numbers (stop when it - 0)
  /*
  Input:
  3
  4
  5
  1
  10
  9
  0

  Output:
  1 3 5 9
  */

  int n;
  vector<int> v;
  for(;;){
    cout << "Enter next number...\n";
    cin >> n;
    if (n == 0)
      break;
    if (n % 2 == 1)
      v.push_back(n);
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl;


  



  return 0;
}