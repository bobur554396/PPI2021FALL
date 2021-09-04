#include <iostream>

using namespace std;

  // Variables -- box, data holder, stack
  // Data types -- int -- integer [1, 2, 4, 5, 100, -10, ....]

  // Variable name rules:
  /*
    1) name can not be started with numbers
    2) name can not be only number
    3) names can be only in range of [a-zA-Z0-9_]

    valid examples for variable names:
    int apple;
    int MyApple;
    int apple1;
    int my_apple;
    int _;
    int appel1_appel2;


    invalid examples for variable names:
    int 1;
    int 123;
    int $%;
    int my var;
  */

int main(){
  int students = 200; // value stored from right to left;
  int ISstudents = 100;

  int a = students;

  cout << "students = " << students << endl; // endl -- end of line
  cout <<  "a = " << a << endl;

  return 0;
}


