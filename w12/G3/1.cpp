#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool divisableByFour(int a){
  return a % 4 == 0;
}

int my_count_if(vector<int>::iterator first, vector<int>::iterator last){
  int cnt = 0;
  while(first != last){
    if(divisableByFour(*first)) cnt++;
    ++first;
  }
  return cnt;
}


int main(){
  // count_if(begin, end, func)
  vector<int> v;
  for(int i = 0; i < 10; i++)
    v.push_back(i);
  
  int res = count_if(v.begin(), v.end(), divisableByFour); 
  int res2 = my_count_if(v.begin(), v.end()); 

  cout << res << " " << res2 << endl;

  
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl;

  return 0;
}