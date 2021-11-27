#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;


void show(int a){
  cout << a << " ";
}

int c = 0;
int gen(){
  return ++c;
}

int gen2(){
  // [1 - 100]
  return rand() % 100 + 1;
}

vector<int> v(10);

void my_generate(){
  for(int i = 0; i < v.size(); i++)
    v[i] = gen2();
}

int main(){
  srand(time(0));

  // vector<int> v(10);

  my_generate();
  // generate(v.begin(), v.end(), gen2);
  for_each(v.begin(), v.end(), show);
  // cout << gen2() << endl;

  return 0;
}