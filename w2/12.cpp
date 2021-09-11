#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int points;
  cin >> points;

  if (points >= 95){
    cout << "A" << endl;
  }
  else if (points >= 90)
    cout << "-A" << endl;
  else if (points >= 85)
    cout << "B+" << endl;
  else 
    cout << "D" << endl;

  return 0;
}