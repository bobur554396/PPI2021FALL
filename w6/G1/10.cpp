#include <iostream>

using namespace std;

int max(int a, int b){
  if(a > b)
    return a;
  return b;
}

int main(){

  int q, p;
  cin >> q >> p;

  cout << max(q, p) << endl;

  
  return 0;
}

