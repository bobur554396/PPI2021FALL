#include <iostream>

using namespace std;


int main(){
  /*
  3 4
  2 4 4 5
  -1 2 45 7
  9 7 2 5

  res:
  45
  2 3
  */
  // max element in matrix, with row and column number
  freopen("input.txt", "r", stdin); // r => read
  freopen("output.txt", "w", stdout); // w => write

  int n, m;
  cin >> n >> m;  
  int a[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  // your logic
  int maxi = a[0][0], row = 0, col = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(a[i][j] > maxi){
        maxi = a[i][j];
        row = i;
        col = j;
      }
    }
  }

  cout << maxi << endl << row + 1<< " " << col + 1<< endl;

  return 0;
}