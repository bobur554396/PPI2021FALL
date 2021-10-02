#include <iostream>

using namespace std;

int main(){
  // - [ ] What is string

  // kbtu, hello, my name FIT.

  char word[] = {'k', 'b', 't', 'u'};

  string s1 = "hello";
  string s2("hello");

  string s3 = s1;

  s3 += " kbtu!"; //s3 = s3 + " kbtu!";

  cout << s3 << endl;

  for(int i = 0; i < s3.size(); i++){
    cout << s3[i] << " ";
  }



  return 0;
}