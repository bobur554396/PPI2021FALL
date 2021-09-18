#include <iostream>

using namespace std;

int main(){
  // break / continue

  
  for(int i = 0; i < 20; i++){
    if(i % 3 == 0){
      continue;
    }
    if(i == 10)
      break;
    
    cout << i << " ";
    
  }

  return 0;
}