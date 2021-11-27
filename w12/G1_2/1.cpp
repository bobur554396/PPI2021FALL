#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> v;

void show(){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}

bool isDivisableThree(int a){
  return a % 3 == 0;
}

int my_count_if(){
  int cnt = 0;
  for(int i = 0; i < v.size(); i++){
    if(isDivisableThree(v[i])) cnt++;
  }
  return cnt;
}


int main(){
  for(int i = 0; i < 10; i++)
    v.push_back(i);

  show();

  int res = count_if(v.begin(), v.end(), isDivisableThree);
  int res2 = my_count_if();
  cout << res << " " << res2 << endl;

  return 0;
}