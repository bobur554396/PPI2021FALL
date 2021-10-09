#include <iostream>

using namespace std;

int sum(int a, int b){
  return a + b;
}

int main(){

  int q, p;
  cin >> q >> p;

  int res = sum(q, p);

  cout << res << endl;

  return 0;
}

