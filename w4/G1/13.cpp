#include <iostream>

using namespace std;


int a[3][4];

int main(){

  
  // freopen("input.txt", "r", stdin); // r => read
  // freopen("output.txt", "w", stdout); // w => write

  int n;
  cin >> n;

  for(int i = 1; i < n; i++){
    for(int j = 1; j < n; j++){
      cout.width(3);
      cout << i * j << " ";
    }
    cout << endl;
  }


  

 

  return 0;
}