#include <iostream>

using namespace std;

int main(){
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

  int maxi = a[0][0]; // 2
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(a[i][j] > maxi) // a[0][0] > maxi =>   2 > 2
        maxi = a[i][j];
    }
  }

  cout << maxi << endl;




  

 

  return 0;
}