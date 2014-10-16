#include <cmath>
#include <iostream>
using namespace std;

int main() 
{
  int binary, i = 0, sum = 0, temp, bin;

  cout << "Please enter a binary number" << endl;
  cin >> binary;

  bin = binary;

  while ( binary > 0 ) {
    temp = binary % 10;
    if ( temp == 1 ) {
      temp = pow(2, i);
    }
    sum += temp;
    binary /= 10;
    i++;
  }

  cout << bin << " in decimal is: " << sum << endl;

  return 0;
}