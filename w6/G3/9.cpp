#include <iostream>

using namespace std;

int max(int a, int b){
  if(a > b)
    return a;
  return b;
}

int main(){
  int n, m; // local variable
  cin >> n >> m;

  int result = max(n, m); // local variable

  cout << result << endl;

  return 0;
}
