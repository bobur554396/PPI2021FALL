#include <iostream>

using namespace std;

int myMax(int a, int b){
  if(a > b)
    return a;
  return b;
}

int main(){ // Main function
  
  int a, b;
  cin >> a >> b;

  int res = myMax(a, b);
  cout << res << endl;

  return 0;
}
