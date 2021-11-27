#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v(5);
int a[5];

void show(){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}


int main(){

  fill(v.begin(), v.end(), 3);  
  
  show();

  return 0;
}