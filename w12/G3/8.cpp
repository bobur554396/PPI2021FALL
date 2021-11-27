#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;


int main(){

  // int r = time_data;
  // int random = r + 100 * 3 / 4 + 2000 % 30;

  // cout << rand() << endl; // [0, RAND_MAX]
  srand(time(0)); // NULL

  // cout << rand() << endl; // [0, RAND_MAX]

  // // [0 - 10]
  // cout << rand() % 10 << endl;


  // // [10 - 20]
  // cout << rand() % 10 + 10 << endl;


  // [2000 - 2021]
  cout << rand() % 21 + 2000 << endl;

  return 0;
}