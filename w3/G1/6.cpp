#include <iostream>

using namespace std;

int main(){
  //- [x] even numbers / odd numbers till 100

  for(int i = 0; i <= 100; i++){
    if(i % 2 == 0){
      cout << i << " ";
    }
  }
  

  return 0;
}