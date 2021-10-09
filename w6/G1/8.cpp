#include <iostream>

using namespace std;

string line = "Global line var"; // Global variable

void greeting(string name){ // Implementation of the function
  string res = "hi " + name +  "!"; // Local variable
  cout << res << endl;
}


int main(){ // Main function
  
  string n;
  cout << "Enter your name...\n";
  cin >> n;

  greeting(n);

  cout << line << endl;


  return 0;
}

