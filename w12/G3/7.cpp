#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


void func(int a){
  cout << a << " ";
}

int c = 0;
int gen(){
  return ++c;
}


int main(){
  vector<int> v(10);

  generate(v.begin(), v.end(), gen);
  for_each(v.begin(), v.end(), func);

  cout << endl;

  return 0;
}