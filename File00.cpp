#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  srand(time(NULL));

  int fortune = rand() % 6;  // Generates a random number 

  if (fortune == 0) { 
    cout << " Don't pursue happiness create it.\n";
  }
  else if (fortune == 1) { 
    cout << " All things are difficult before they are easy.\n";
  }
  else if (fortune == 2) {
    cout << " The early bird gets the worm, but the second mouse gets the cheese.\n";
  }
  else if (fortune == 3) {
    cout << " Someone in your life needs a letter from you.\n";
  }
  else if (fortune == 4) {
    cout << " The fortune you search for is in another cookie.\n";
  }
  else {
    cout << " Help! I'm being held prisoner in a Chinese bakery!\n";
  }
}