#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main(){
  srand(time(0));

  // [0 - 10]
  // cout << rand() % 10 << endl; // [0, RAND_MAX]
  // cout << rand() % 10 << endl; // [0, RAND_MAX]
  // cout << rand() % 10 << endl; // [0, RAND_MAX]
  // cout << RAND_MAX << endl;

  // // [10 - 20]
  // cout << rand() % 10 + 10 << endl;

  // [2000 - 2021]
  cout << rand() % 21 + 2000<< endl;

  return 0;
}