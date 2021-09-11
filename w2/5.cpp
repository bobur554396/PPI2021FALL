#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // - [ ] printf with floating numbers (M_PI)

  // cout << M_PI << endl;

  /*
    %i - integer
    %f - float / double --> %[align].[length]f
    %c - char
    %s - string
  */

  // printf("num = %i, char = %c \n", 10, '&');
  
  printf("%.5f", M_PI);
  
  return 0;
}