#include <iostream>
#include <vector>

using namespace std;


int main(){
  int n;
  vector<int> v;
  v.push_back(5);
  v.push_back(2);
  v.push_back(10);
  v.push_back(7);
  
  v.insert(v.begin() + 1, 4);
  v.insert(v.begin() + 1, 20);

  v[1] = 100;

  // reverse(v.begin(), v.end());
  

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl;



  return 0;
}