#include <iostream>

using namespace std;

int main(){
  
  for(int i = 0; i < 3; i++){
    cout << "i = " << i << endl;
    for(int j = 0; j < 4; j++){
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}