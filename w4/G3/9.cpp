#include <iostream>

using namespace std;


int a[3][4];

int main(){
  
  // for(int i = 0; i < 3; i++){ // rows
  //   for(int j = 0; j < 4; j++){ // columns
  //     a[i][j] = 0;
  //   }
  // }

  a[0][2] = 5;
  a[1][1] = 10;
  a[2][1] = -1;
  a[2][3] = 2;


  for(int i = 0; i < 3; i++){ // rows
    for(int j = 0; j < 4; j++){ // columns
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}