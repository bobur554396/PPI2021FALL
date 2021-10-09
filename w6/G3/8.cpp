#include <iostream>

using namespace std;

int sum(int a, int b){
  int res = a + b; // local variable
  return res;
}

int main(){
  int n, m; // local variable
  cin >> n >> m;

  int result = sum(n, m); // local variable

  cout << result << endl;

  return 0;
}
