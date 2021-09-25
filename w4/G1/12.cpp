#include <iostream>

using namespace std;


int a[3][4];

int main(){

  int n = 3, m = 4;

  // for(int i = 0; i < n; i++){
  //   for(int j = 0; j < m; j++){
  //     a[i][j] = 0;
  //   }
  // }

  a[0][2] = 5;
  a[2][1] = -1;
  a[1][1] = 10;

  
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }


  

 

  return 0;
}