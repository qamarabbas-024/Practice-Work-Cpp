#include <iostream>
using namespace std;

void myFunction() {
  cout << "I just got executed!";
}

int main() {
  for(int i=0;i<10;i++)
  {
  myFunction();
  cout<<endl;
  }
return 0;
}
