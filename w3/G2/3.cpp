#include <iostream>

using namespace std;

int main(){
  //- [ ] even numbers / odd numbers till 100

  for(int i = 0; i <= 100; i++){
    if(i % 2 == 1)
      cout << i << " ";
  }
  
  return 0;
}