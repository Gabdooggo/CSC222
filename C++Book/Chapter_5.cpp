#include <iostream>
using namespace std;
#include <string>
//The answer for the second question is 10. The first function f() returns 1, the second function f(0) returns 1, and the third function f(3, 4) returns 8. Therefore, the sum is 1 + 1 + 8 = 10.
/*bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short); //This equals 1
  bool floats = sizeof(float) == 0.5 * sizeof(double); //This equals 1. since size of float = 4 while size of double = 8
  bool chars = sizeof(char) == 1; //This equals 1 since char always = 1 byte*/


int main() {
    int n = 2;
    string s = "2";
    cout << (s == n) <<  endl;
    return 0;
}
