#include <iostream>
using namespace std;
//The answer for the second question is 10. The first function f() returns 1, the second function f(0) returns 1, and the third function f(3, 4) returns 8. Therefore, the sum is 1 + 1 + 8 = 10.
/*bool ints = sizeof(long) >= sizeof(int) && sizeof(int) >= sizeof(short); //This equals 1
  bool floats = sizeof(float) == 0.5 * sizeof(double); //This equals 1. since size of float = 4 while size of double = 8
  bool chars = sizeof(char) == 1; //This equals 1 since char always = 1 byte*/

int main() {
    int i = 12;
    float f = -1.0;
    while (i < 0) {
        f = f + 5.0 * f / -5; 
        --i;
        cout << "printing f: " << f << endl;
    }
   // cout << i << endl;
    return 0;
}
