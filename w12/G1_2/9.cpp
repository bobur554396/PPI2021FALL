#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;


int main(){
  /*
  Your are given number N; Show all permiutations of [1-N];
  */
  int n;
  cin >> n;
  vector<int> v;
  for(int i = 1; i <= n; i++)
    v.push_back(i);
  
  do {
    for(int i = 0; i < v.size(); i++)
      cout << v[i] << " ";
    cout << endl;
  } while(next_permutation(v.begin(), v.end()));


  return 0;
}