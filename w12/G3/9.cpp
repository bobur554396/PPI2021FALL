#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;


void func(int a){
  cout << a << " ";
}

int gen(){
  return rand() % 100 + 1; // [1-100]
}


int main(){
  srand(time(0));
  vector<int> v(10);

  generate(v.begin(), v.end(), gen);
  for_each(v.begin(), v.end(), func);

  cout << endl;

  return 0;
}